#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int year=0;
  while(true)
  {
    a=a*3;
    b=b*2;
    year++;
    if(a>b)
      break;
  }
  cout<<year;
}