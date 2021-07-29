#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
  pair<int,int> * arr;
  int n;
  cin>>n;
  arr= new pair<int,int>[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i].first;
    arr[i].second=i+1;
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i].second<<' ';
  }
  return 0;
}