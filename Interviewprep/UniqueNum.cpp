#include<bits/stdc++.h>
using namespace std; 

int main(){
  int uniq=0;
  int arr[]={3,53,53,5,3,5,7,8,9,8,9};// 7 is unique
  for(int i: arr){
    uniq = uniq ^ i;
  }
  cout<<uniq<<" "<<endl;
}