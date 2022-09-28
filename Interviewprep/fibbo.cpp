#include<bits/stdc++.h>
using namespace std;


int main(){
  int a=0;
  int b=1;
  
  int n;
  cin>>n;
  cout<<a<<" "<<b<<" ";
  for (int i = 0; i <=n; i++)
  {
    int sum = a+b;
    a=b;
    b=sum;
    cout<<sum<<" ";
  }
  
  
}