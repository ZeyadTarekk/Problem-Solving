#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,police=0,untreated=0,x;
  cin>>n;
  while(n--)
  {
    cin>>x;
    if(x<0)
    {
      if(police<1)
        untreated++;
      else
        police--;
    }
    else
      police+=x;
  }
  cout<<untreated;
}