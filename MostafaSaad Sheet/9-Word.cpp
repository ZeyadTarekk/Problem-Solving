#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  int lower=0;
  int upper=0;
  cin>>s;
  // for(int i=0;i<s.size();i++)
  // {
  //   if(int(s[i])>=97&&int(s[i])<=122)
  //     lower++;
  //   else if(int(s[i])>=65&&int(s[i])<=90)
  //     upper++;
  // }
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>='a'&&s[i]<='z')
      lower++;
    else if(s[i]>='A'&&s[i]<='Z')
      upper++;
  }
  if(lower>=upper)
    transform(s.begin(),s.end(),s.begin(),::tolower);
  else
    transform(s.begin(),s.end(),s.begin(),::toupper);
  cout<<s;
}