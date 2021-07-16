#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
  cin>>a>>b>>c;
  cout<<min(min(a/1,b/2),c/4)*(7);
}
// int a,b,c;
  // cin>>a>>b>>c;
  // int no1,no2,no3;
  // no1=a/1; no2 = b/2; no3 = c/4;
  // cout<<min(min(no1,no2),no3)*(7);