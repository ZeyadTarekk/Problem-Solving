#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int no1=1,no2=0;
  string s1,s2,s;
  cin>>s1;
  n--;
  while(n--)
  {
    cin>>s;
    if(s==s1)
      no1++;
    else
    {
      s2=s;
      no2++;
    }

  }
    if(no2>no1)
      cout<<s2;
    else
      cout<<s1;
  return 0;
}