#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main()
{
  int n,m;
  cin>>n>>m;
  if(!isPrime(m))
  {
    cout<<"NO";
    return 0;
  }
  for(int i=n+1;i<=m;i++)
  {
    if(isPrime(i))
    {
      if(i==m)
      {
        cout<<"YES";
        break;
      }
      else
      {
        cout<<"NO";
        break;
      }
    }
  }

  return 0;
}