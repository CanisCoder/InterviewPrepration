#include<bits/stdc++.h>
using namespace std; 
int main(){
  int row=1;
  int value=1;
  int n;
  cin>>n;


  while (row<=n)
  {
    int space =row-1;
    while (space)
    {
      cout<<" ";
      space=space-1;
    }
    int col=1;
    


    while (col<=n-row+1)
    {
     cout<<value;
     col=col+1; 
    }
  cout<<endl;
  value=value+1;
  row=row+1;
  }
  
  
}