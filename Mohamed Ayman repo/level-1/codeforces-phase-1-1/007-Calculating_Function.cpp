#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long long n, sum;
  cin>>n;
  if(n%2==0)
    cout<<n/2;
  else
    cout<<(n-1)/2-n;
}

    // long long n;
    // cin>>n;
    // long long sum1,sum2;
    // if(n%2==0)
    // {
        
    //     sum1 = -1*((n/4.0)*(2*1+(n/2.0-1)*2));  //negative values Arithmetic Series
    //     sum2 = ((n/4.0)*(2*2+(n/2.0-1)*2));    //positive values Arithmetic Series
    //     cout<<sum1+sum2;

    //     //cout<<-1*((n/4.0)*(2*1+(n/2.0-1)*2)) + ((n/4.0)*(2*2+(n/2.0-1)*2));
    // }
    // else
    // {
    //     sum1 = -1*(((ceil(n/2.0))/2.0)*(2*1+((ceil(n/2.0))-1)*2));
    //     sum2 = ((floor(n/2.0))/2.0)*(2*2+((floor(n/2.0)-1)*2));
    //     cout<<sum1+sum2;

    //    // cout<<-1*(((ceil(n/2.0))/2.0)*(2*1+((ceil(n/2.0))-1)*2)) + ((floor(n/2.0))/2.0)*(2*2+((floor(n/2.0)-1)*2));

    // }
//}