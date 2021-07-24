#include<iostream>
using namespace std;
int main()
{
  int n,b,d,a,no=0,sum=0;
  cin>>n>>b>>d;
  while(n--)
  {
    cin>>a;
    if(a<=b)
      sum+=a;
    if(sum>d)
    {
      no++;
      sum=0;
    }
  }
  cout<<no;
  return 0;
}