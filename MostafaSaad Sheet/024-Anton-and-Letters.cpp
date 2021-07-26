#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  char x;
  cin>>x;
  int n;
  vector<char> s;
  while(x!='}')
  {
    cin>>x;
    if(int(x)>='a'&&int(x)<='z')
      s.push_back(x);
  }
  if(s.size()>0)
    n=1;
  else
    n=0;
  sort(s.begin(),s.end());
  for(int i=1;i<s.size();i++)
    if(s[i]!=s[i-1])
      n++;
  cout<<n;

  return 0;
}