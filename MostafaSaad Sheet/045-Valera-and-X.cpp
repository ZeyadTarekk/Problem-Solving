#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string * arr = new string [n];
  bool status = true;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i][i]!=arr[i][n-1-i]||arr[i][i]!=arr[0][0])
    {
      status = false;
      break;
    }
    for(int j=0;j<n;j++)
    {
      if(j!=i&&j!=(n-1-i))
      {
        if(arr[i][j]==arr[i][i]||arr[i][j]!=arr[0][1])
        {
          status = false;
          break;
        }
      }
    }
  }


  if(status)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}