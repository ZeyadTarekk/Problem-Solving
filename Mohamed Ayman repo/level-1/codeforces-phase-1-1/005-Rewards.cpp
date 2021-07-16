#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    if((ceil((a1+a2+a3)/5.0)+ceil((b1+b2+b3)/10.0))>n)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
} // namespace std;
