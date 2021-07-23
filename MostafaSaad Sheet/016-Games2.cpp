#include<iostream>
#include<utility>
using namespace std;
int main()
{
  pair<int,int> *arr;
  int n,no=0;
  cin>>n;
  arr = new pair<int,int>[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i].first;
    cin>>arr[i].second;
  }
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      if(i!=j) 
        if(arr[i].first==arr[j].second)
          no++;
  cout<<no;

}