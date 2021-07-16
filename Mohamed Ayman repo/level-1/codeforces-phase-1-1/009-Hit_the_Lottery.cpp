#include<iostream>
using namespace std;
int main()
{
  long long n;
  long long no=0;
  cin>>n;
  if(n%100==0)
    cout<<n/100;
  else
  {
    while(n>=100)
      {
        no++;
        n-=100;
      }
    while(n>=20)
      {
        no++;
        n-=20;
      }
      while(n>=10)
      {
        no++;
        n-=10;
      }
      while(n>=5)
      {
        no++;
        n-=5;
      }
      while(n>=1)
      {
        no++;
        n-=1;
      }
      cout<<no;
  }

}