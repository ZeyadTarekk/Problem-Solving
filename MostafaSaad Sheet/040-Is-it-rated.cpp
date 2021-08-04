#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<pair<int,int>> v1(n);
  for(int i=0;i<n;i++)
  {
    cin>>v1[i].first>>v1[i].second;
    if(v1[i].second!=v1[i].first)
    {
      cout<<"rated";
      return 0;
    }
  }
  bool flag = false;
  for(int i=1;i<n;i++)
  {
    if(v1[i].first>v1[i-1].first)
    {
      flag = true;
      break;
    }
  }
  if(flag)
    cout<<"unrated";
  else
    cout<<"maybe";
  return 0;
}