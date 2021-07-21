#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
  int n,x,sum1=0,sum2=0;
  cin>>n;
  vector<int> v1,v2;
  
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v1.push_back(x);
  }
  for(int i= v1.size()-1; i>=0;i--)
  {
    v2.push_back(v1[i]);
  }
  for(int i = 0 ;i<n/2;i++)
  {
    sum1+=(max(v1.back(),v2.back()));
    if(v1.back()>v2.back())
      v1.pop_back();
    else
      v2.pop_back();
    sum2+=(max(v1.back(),v2.back()));
    if(v1.back()>v2.back())
      v1.pop_back();
    else
      v2.pop_back();
  }
  if(n%2!=0)
    sum1+=v1.back();
  cout<<sum1<<' '<<sum2;
}