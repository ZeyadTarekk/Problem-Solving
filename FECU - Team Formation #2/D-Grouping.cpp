#include<iostream>
#include<cmath>
using namespace std;
long long fact(long long n)
{
  if(n==1||n==0)
    return 1;
  else
    return n *fact(n-1);
}
int main()
{
  int t,k;
  long long n;
  cin>>t;
  for(int i =0 ; i<t;i++)
  {
    cin>>n>>k;
    cout<<"Case #"<<i+1<<": "<<fact(n)/(fact(n)/(fact(n-k)*fact(k)))+2*k<<'\n';
  }
}