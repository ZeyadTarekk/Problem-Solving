#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
  int n,m;
  bool status = false;
  cin>>n>>m;
  char a;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a;
      if(a=='W'||a=='B'||a=='G')
        status= false;
      else
      {
        status = true;
        break;
      }
    }
    if(status)
      break;
  }
  if(status)
    cout<<"#Color";
  else
    cout<<"#Black&White";
  return 0;
}