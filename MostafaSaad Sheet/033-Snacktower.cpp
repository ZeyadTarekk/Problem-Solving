#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int *arr = new int[n];
  //int *arr2=new int[n];
  int last=n+1;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    //arr2[i]=arr[i];
  }
  // sort(arr2,arr2+n);
  int j=0;
  for(int i=0;i<n;i++)
  {

    if(arr[i]==last-1)
    {
      for(int m=i;m>=j;m--)
        cout<<arr[m]<<' ';
      last=arr[i];
      cout<<'\n';
      j=i;
    }
    else
    {
      cout<<'\n';
    }

  }
  
}