#include<bits/stdc++.h>
using namespace std; 
int main(){
  int row =1;
  int value=1;
  int n;
  cin>>n;
  while (row<=n)
  {
    int space=n-row;
    while (space)
    {
      cout<<" ";
      space=space-1;
    }
    int col=1;
    
    while (col<=row)
    {
      cout<<value;
      col=col+1;
    }
    
  value=value+1;  
  cout<<endl;
  row = row+1;
  }
  

}