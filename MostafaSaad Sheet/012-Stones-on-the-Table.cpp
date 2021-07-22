#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,no=0;
  string s;
  cin>>n>>s;
  for(int i = 0 ; i<n-1;i++)
  {
    if(s[i]==s[i+1])
      no++;
  }
  cout<<no;
  return 0;
}