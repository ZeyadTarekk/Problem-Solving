#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  string s;
  cin>>n>>s;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  int no=1;
  sort(s.begin(),s.end());
  for(int i=1;i<s.size();i++)
  {
    if(s[i]!=s[i-1])
      no++;
  }
  if(no<26)
    cout<<"NO";
  else
    cout<<"YES";
  return 0;
}