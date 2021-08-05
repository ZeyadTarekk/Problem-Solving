#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  long long w,h;
  while(t--)
  {
    cin>>w>>h;
    if((w*h)%2==0)
      cout<<"Hasan\n";
    else
      cout<<"Hussain\n";
  }
  return 0;
}