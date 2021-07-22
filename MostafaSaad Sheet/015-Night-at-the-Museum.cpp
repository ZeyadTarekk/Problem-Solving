#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int count=0;
  count+=min(('a'-s[0])<0?('a'-s[0])+26:('a'-s[0]),(s[0]-'a')<0?(s[0]-'a')+26:(s[0]-'a'));
  for(int i=1;i<s.size();i++)
      count+=min((s[i]-s[i-1])<0?(s[i]-s[i-1])+26:(s[i]-s[i-1]),(s[i-1]-s[i])<0?(s[i-1]-s[i])+26:(s[i-1]-s[i]));
  cout<<count;

}