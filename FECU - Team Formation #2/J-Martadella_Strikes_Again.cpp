#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long long r,R;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>R>>r;
    if(2*log10(R)>2*log10(r)+log10(2))
      cout<<1<<'\n';
    else
      cout<<2<<'\n';
  }
}