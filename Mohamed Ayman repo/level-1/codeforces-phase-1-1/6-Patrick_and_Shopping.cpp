#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long d1,d2,d3;
    long long sum = 0;
    cin>>d1>>d2>>d3;
    sum+=(d1>d2?d2:d1);
    if(d1+d2<d3)
        sum+=(d1+d2);
    else
        sum+=d3;
    if(d3+min(d1,d2)<max(d1,d2))
        sum+=(d3+min(d1,d2));
    else
        sum+=max(d1,d2);
    cout<<sum;

    return 0;
}