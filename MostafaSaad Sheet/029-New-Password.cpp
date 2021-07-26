#include<iostream>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int flag=0;
  char x='a';
  while(n--)
  {
    cout<<x++;
    flag++;
    if(flag==k)
    {
      x='a';
      flag=0;
    }
  }
  return 0;
}