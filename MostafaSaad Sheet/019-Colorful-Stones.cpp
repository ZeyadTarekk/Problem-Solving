#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s1,s2;
  int no=1;
  int j=0;
  cin>>s1>>s2;
  for(int i=0;i<s2.size();i++)
  {
    if(s2[i]==s1[j])
    {
      no++;
      j++;
    }
  }
  cout<<no;
}