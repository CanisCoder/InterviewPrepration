#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n;
  int i =1;
  cin>> n;

  while (i<=n)
  {
    int j =1;
    while (j<=n)
    {
      cout<<j;  // for reverse [cout<<n-j+i;]
      
      cout<<" ";
      j=j+1;
    }
    cout<<endl;

    i = i+1;
  }
 
}