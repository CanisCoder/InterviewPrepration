#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n;
  int row =1;

  
  cin>> n;

  while (row<=n)
  {
    int col =1;
      while (col<=n){
      char ch = 'A'+row+col-2;
      cout<<ch<<" ";
      col=col+1;
      
    }
    cout<<endl;
    row=row+1;
  }
}