#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int arr[4]={8,4,2,6};
  int n;
  cin>>n;
  if(n==0)
    cout<<1;
  else if(n%4==0)
    cout<<6;
  else
    cout<<arr[n%4-1];
  return 0;
}