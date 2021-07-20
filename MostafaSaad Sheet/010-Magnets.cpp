#include<iostream>
using namespace std;
int main()
{
  int n,x,no=1,x2;
  cin>>n;
  cin>>x;
  for(int i=1;i<n;i++)
  {
    cin>>x2;
    if(x2!=x)
      no++;
    x=x2;
  }
  cout<<no;
}