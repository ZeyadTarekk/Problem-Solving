#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int diff = abs(a-b);
  cout<<(diff/2)*(diff/2+1)/2+(diff-diff/2)*(diff-diff/2+1)/2;
}