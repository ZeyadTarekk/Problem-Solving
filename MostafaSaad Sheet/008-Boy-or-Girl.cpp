#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int no=1;
  sort(s.begin(),s.end());
  for(int i=1;i<s.size();i++)
    if(s[i]!=s[i-1])
      no++;
  if(no%2==0)
    cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
}