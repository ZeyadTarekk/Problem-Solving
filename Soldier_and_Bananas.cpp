#include<iostream>
using namespace std;
int main()
{
    int k,w;
    long long n;
    cin>>k>>n>>w;
    long long money=0;
    for(int i=1;i<=w;i++)
    {
        money+=i*k;
    }
    if(money>n)
        cout<<money-n;
    else
        cout<<0;
}