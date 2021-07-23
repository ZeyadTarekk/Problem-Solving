#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<utility>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  while(n--)
  {
    cin>>s;
    sort(s.begin(),s.end());
    int no=1;
    for(int i=1;i<s.size();i++)
    {
      if(s[i]!=s[i-1])
        no++;
    }
    pair<char,int> *arr= new pair<char,int>[no];
    int j=0;
    int occ=1;
    arr[0].first=s[0];
    for(int i=1;i<s.size();i++)
    {
      if(s[i]==s[i-1])
        occ++;
      else
      {
        arr[j++].second=occ;
        arr[j].first=s[i];
        occ=1;
      }
    }
    int sum=0;
    for(int i=0;i<no;i++)
    {
      sum+=arr[i].second;
    }
    arr[no-1].second=s.size()-sum;
    int col=0,cols=0;
    for(int i=0;i<no;i++)
    {
      if(arr[i].second>1)
        cols++;
      else
        col++;
    }

    //cout<<'\n'<<s<<' '<<no<<' '<<s.size()<<'\n';
    if(s.size()==1)
      cout<<0<<'\n';
    else if(s.size()==no)
      cout<<int(floor(s.size()/2.0))<<'\n';
    else
    {
      cout<<int(floor(col/2.0))+cols<<'\n';
    }
  }
  return 0;
}