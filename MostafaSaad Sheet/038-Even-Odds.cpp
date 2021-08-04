#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  long long n,k;
  cin>>n>>k;
  if(k<=(n-n/2))
    cout<<k*2-1;
  else
    cout<<(k-(n-n/2))*2;
  return 0;
}