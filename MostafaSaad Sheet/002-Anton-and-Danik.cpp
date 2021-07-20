#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int ant=0,dan=0;
  for(int i=0; i<s.size();i++)
  {
    if(s[i]=='A')
      ant++;
    else
      dan++;
  }
  if(ant>dan)
    cout<<"Anton";
  else if(dan>ant)
    cout<<"Danik";
  else
    cout<<"Friendship";
  return 0;
}