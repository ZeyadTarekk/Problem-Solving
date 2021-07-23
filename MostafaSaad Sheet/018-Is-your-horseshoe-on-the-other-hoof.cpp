#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long long arr[4];
  int no=1;
  for(int i=0;i<4;i++)
    cin>>arr[i];
  sort(arr,arr+4);
  for(int i=1;i<4;i++)
    if(arr[i]!=arr[i-1])
      no++;
  cout<<4-no;
}