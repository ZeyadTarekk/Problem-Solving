#include<iostream>
using namespace std;
int main()
{
  int n,x,sum=0,no=0;
  cin>>n;
  while(n--)
  {
    cin>>x;
    sum+=x;
    cin>>x;
    sum+=x;
    cin>>x;
    sum+=x;
    if(sum>=2)
      no++;
    sum=0;
  }
  cout<<no;
}