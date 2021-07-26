#include<iostream>
using namespace std;
int main()
{
  int n;
  long long x,x1;
  char m;
  int dist=0;
  cin>>n>>x;
  while(n--)
  {
    cin>>m>>x1;
    if(m=='+')
      x+=x1;
    else
    {
      if(x1<=x)
      {
        x-=x1;
      }
      else
        dist++;
    }

  }
  cout<<x<<' '<<dist;
  return 0;
}