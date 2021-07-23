#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int x;
  while(n--)
  {
    cin>>x;
    int *arr = new int [x];
    int *arr2 = new int[x];
    // int *arr4= new int[x];
    for(int i= 0;i<x;i++)
    {
      cin>>arr[i];
      arr2[i]=arr[i];
      // arr4[i]=0;
    }
    
    sort(arr2,arr2+x);
    int no=1;
    for(int i=1;i<x;i++)
      if(arr[i]==arr[i-1])
        no++;
    pair<int,int> * arr3 = new pair<int,int>[no];
    pair<int,int> * arr4 = new pair<int,int>[no];
    int j=0;
    int occ=1;
    arr3[0].first=arr2[0];
    arr4[0].first=arr2[0];
    for(int i=0;i<no;i++)
      arr4[i].second=0;
    for(int i=1;i<x;i++)
    {
      if(arr2[i]==arr2[i-1])
        occ++;
      else
      {
        arr3[j++].second=occ;
        arr3[j].first=arr2[i];
        arr4[j].first=arr2[i];
        occ=1;
      }
    }
    for(int i=0;i<x;i++)
    {
      for(int j=0;j<no;j++)
      {
        if(arr[i]==arr3[j].first)
        {
          if(arr4[j].second>=k)
            cout<<0<<' ';
          else
          {
            cout<<arr4[j].second+1<<' ';
            arr4[j].second++;
          }
        }
      }
    }
    cout<<'\n';
  }

  return 0;
}