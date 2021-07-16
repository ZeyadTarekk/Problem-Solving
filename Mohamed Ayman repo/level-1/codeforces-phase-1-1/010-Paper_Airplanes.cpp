#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int k,n,s,p;
  cin>>k>>n>>s>>p;
  cout<<int(ceil((ceil(n/float(s))*k)/float(p)));
}