// Subtract the Product and Sum of Digits of an Integer

#include<bits/stdc++.h>
using namespace std; 


int main(){
int prod=1;
int sum =0;
int n;
cin >>n;
while (n!=0)
{
  int digit=n%10;
  prod=prod*digit;
  sum=sum+digit;

  n = n/10;
}
int ans = prod-sum;
cout<<ans;
}