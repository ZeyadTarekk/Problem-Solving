#include<iostream>
using namespace std;
int main()
{
  int n,h;
  cin>>n>>h;
  int x,sum=n;
    while(n--)
    {
      cin>>x;
      if(x>h)
        sum++;
    }
    cout<<sum;
}