#include<iostream>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  
  while(t--)
  {
    long long n;
    cin>>n;
    long long ans=15;
    if(n<=6)
      cout<<ans<<'\n';
    else if(n<=8)
      cout<<20<<'\n';
    else if(n<=10)
      cout<<25<<'\n';
    else
    {
      n=(n%2==0?n:n+1);
      ans = n *2.5;
      cout<<ans<<'\n';
    }
  }
  return 0;
}