#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++)
      cin>>arr[i];
    for(int i=0;i<n;i++)
      arr[i]=(arr[i]&arr[n-i-1]);
    sort(arr,arr+n);
    cout<<arr[0]<<'\n';
  }
  return 0;
}