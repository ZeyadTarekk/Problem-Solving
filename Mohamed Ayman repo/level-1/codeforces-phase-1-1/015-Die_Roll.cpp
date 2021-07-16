#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int y,w;
  cin>>y>>w;
  int x=6-max(y,w)+1;
  if(x==2)
    cout<<1<<'/'<<3;
  else if(x==3)
    cout<<1<<'/'<<2;
  else if(x==4)
    cout<<2<<'/'<<3;
  else if(x==6)
    cout<<1<<'/'<<1;
  else
    cout<<x<<'/'<<6;
}