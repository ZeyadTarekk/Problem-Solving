#include<iostream>
#include<utility>
using namespace std;
int main()
{
  int n;
  cin>>n;
  pair<int,int> arrp;
  int *arr = new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int x;
  cin>>x;
  while(x--)
  {
    cin>>arrp.first>>arrp.second;
    if(arrp.first==1)
    {
      arr[1]=arr[1]+arr[0]-arrp.second;
      arr[0]=0;
    }
    else if(arrp.first==n)
    {
      arr[n-2]=arr[n-2]+arrp.second-1;
      arr[n-1]=0;
    }
    else
    {
      arr[arrp.first-2]=arr[arrp.first-2]+arrp.second-1;
      arr[arrp.first]=arr[arrp.first]+arr[arrp.first-1]-arrp.second;
      arr[arrp.first-1]=0;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<'\n';
  }
}