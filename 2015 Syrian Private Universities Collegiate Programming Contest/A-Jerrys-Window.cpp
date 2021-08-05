#include<iostream>
using namespace std;

int main()
{
  freopen("window.in","r",stdin);
  int t;
  long long x,y;
  cin>>t;
  while(t--)
  {
    cin>>x>>y;
    cout<<x*y<<'\n';
  }
  return 0;
}