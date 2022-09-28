#include<bits/stdc++.h>
using namespace std; 
int linearSearch(int arr[],int i, int n,int searchItem ){
  if(i>=n){
    return -1;
  }
  if(n<0){
    return -1;
  }
  if(arr[i]==searchItem){
    return i;
  }
  return linearSearch(arr,i+1,n,searchItem);

}
int main(){
  int n;
  cout<<"Enter the length of array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array"<<endl;
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int searchItem ;
  cout<<"Enter the search Item"<<endl;
  cin>>searchItem;

cout<<"search item at index : "<<linearSearch(arr,0,n,searchItem)<<endl;

return 0;
   
}