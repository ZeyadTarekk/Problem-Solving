#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  long long t;
  cin>>n;
  while(n--)
  {
    cin>>t;
    if((ceil(t*(1/3.0))*2+floor(t*(1/3.0)))==t)
      cout<<int(floor(t*(1/3.0)))<<' '<<int(ceil(t*(1/3.0)))<<'\n';
    else
      cout<<int(ceil(t*(1/3.0)))<<' '<<int(floor(t*(1/3.0)))<<'\n';
  }
  return 0;
}