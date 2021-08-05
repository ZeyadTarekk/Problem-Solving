#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int n,k;
  while(t--)
  {
    cin>>n>>k;
    vector<int>v1;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=1;i<n;i++)
    {
      for(int j=i+1;j<=n;j++)
      {
        v1.push_back(i*j-k*(arr[i-1] | arr[j-1]));
        if(v1.back()>v1.front())
          v1.erase(v1.begin());
      }
    }
    sort(v1.begin(),v1.end());
    cout<<v1.back()<<'\n';
  }
}