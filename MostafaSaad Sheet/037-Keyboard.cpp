#include<iostream>
using namespace std;
int main()
{
  string s1="qwertyuiop";
  string s2="asdfghjkl;";
  string s3="zxcvbnm,./";
  char c;
  string s;
  string strue="";
  cin>>c>>s;
  bool flag =false;
  if(c=='R')
  {
    for(int i=0;i<s.size();i++)
    {
      for(int j=1;j<s1.size();j++)
      {
        if(s[i]==s1[j])
        {
          strue+=s1[j-1];
          flag = true;
          break;
        }
      }
      if(!flag)
      {
        for(int j=1;j<s2.size();j++)
        {
        if(s[i]==s2[j])
        {
          strue+=s2[j-1];
          flag = true;
          break;
        }
        }
      }
      if(!flag)
      {
        for(int j=1;j<s3.size();j++)
        {
        if(s[i]==s3[j])
        {
          strue+=s3[j-1];
          flag = true;
          break;
        }
        }
      }
      flag = false;
    }
  }
  else if(c=='L')
  {
    for(int i=0;i<s.size();i++)
    {
      for(int j=0;j<s1.size()-1;j++)
      {
        if(s[i]==s1[j])
        {
          strue+=s1[j+1];
          flag = true;
          break;
        }
      }
      if(!flag)
      {
        for(int j=0;j<s2.size()-1;j++)
        {
        if(s[i]==s2[j])
        {
          strue+=s2[j+1];
          flag = true;
          break;
        }
        }
      }
      if(!flag)
      {
        for(int j=0;j<s3.size()-1;j++)
        {
        if(s[i]==s3[j])
        {
          strue+=s3[j+1];
          flag = true;
          break;
        }
        }
      }
      flag = false;
    }
  }
  cout<<strue;
  return 0;
}