#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n;
  string s;
  
  int sum=0;
  cin>>n;
  while(n--)
  {
    cin>>s;
    if(s[0]=='-')
      sum--;
    else if(s[0]=='+')
      sum++;
    else
      {
        if(s[1]=='-')
          sum--;
        else if(s[1]=='+')
          sum++;
      }
  }
  cout<<sum;
}