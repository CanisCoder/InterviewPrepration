#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n;
  int i =1;
  int x =1;
  cin>> n;

  while (i<=n)
  {
    int j =1;
    while (j<=i){
      cout<<x<<" ";

      x=x+1;
      j=j+1;
      
    }
    cout<<endl;
    i=i+1;
  }
}