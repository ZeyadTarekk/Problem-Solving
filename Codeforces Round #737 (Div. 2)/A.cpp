#include<iostream>
#include<algorithm>
#include <iomanip>
using namespace std;
int main()
{
  cout << fixed << setprecision(9);
  int t;
  cin>>t;
  long long n;
  while(t--)
  {
    cin>>n;
    long long * arr = new long long [n];
    for(long long i = 0; i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    long long sum =0;
    for(long long i =0 ;i<n-1;i++)
      sum+=arr[i];
    cout<<arr[n-1]+sum/(double)(n-1)<<'\n';
  }
  return 0;
}