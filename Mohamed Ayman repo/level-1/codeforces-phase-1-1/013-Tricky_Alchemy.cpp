#include<iostream>
using namespace std;
int main()
{
  long long a,b,x,y,z;
  cin>>a>>b>>x>>y>>z;
  long long a1,b1;
  a1=2*x+y;
  b1=y+3*z;
  cout<<((a1-a)>0?a1-a:0)+((b1-b)>0?b1-b:0);
}