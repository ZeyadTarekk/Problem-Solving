#include<iostream>
using namespace std;
int main()
{
    long long x,steps=0;
    cin>>x;
    if(x<=5)
        cout<<1;
    else if(x%5==0)
        cout<<x/5;
    else
        cout<<(x/5)+1;
}