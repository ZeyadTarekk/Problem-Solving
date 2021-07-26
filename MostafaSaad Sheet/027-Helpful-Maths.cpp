#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  string s;
  cin>>s;
  // cout<<s;
  sort(s.begin(),s.end());
  cout<<s;
  int no1=0,no2=0,no3=0;
  for(int i=0;i<s.size();i+=2)
  {
    if(s[i]=='1')
      no1++;
    else if(s[i]=='2')
      no2++;
    else if(s[i]=='3')
      no3++;
  }
  while(no1--)
  {
    if(no1==0)
    {
    if(no2!=0||no3!=0)
      cout<<1<<'+';
    else
      cout<<1;
    }
    else
      cout<<1<<'+';
  }
  while(no2--)
  {
    if(no2==0)
    {
    if(no3!=0)
      cout<<2<<'+';
    else
      cout<<2;
    }
    else
      cout<<2<<'+';
  }
  while(no3--)
  {
    if(no3==0)
    {
    if(no3!=0)
      cout<<3<<'+';
    else
      cout<<3;
    }
    else
      cout<<3<<'+';
  }

  return 0;
}