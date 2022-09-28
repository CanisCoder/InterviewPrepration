#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n;
  int row =1;
  int val =1;

  
  cin>> n;

  while (row<=n)
  {
    int col =1;
      while (col<=row){
      char ch = 'A'+val-1;
      cout<<ch<<" ";
      col=col+1;
      val = val+1;
      
    }
    cout<<endl;
    row=row+1;
  }
}