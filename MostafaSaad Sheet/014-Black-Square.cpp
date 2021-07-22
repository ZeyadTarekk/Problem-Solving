#include<iostream>
#include<string>
using namespace std;
int main()
{
  int a1,a2,a3,a4,cal=0;
  string s;
  cin>>a1>>a2>>a3>>a4>>s;
  for(int i = 0; i<s.size();i++)
  {
    if(s[i]=='1')
      cal+=a1;
    else if(s[i]=='2')
      cal+=a2;
    else if(s[i]=='3')
      cal+=a3;
    else if(s[i]=='4')
      cal+=a4;
  }
  cout<<cal;
  return 0;
}