#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n>>k>>l>>c>>d>>p>>nl>>np;
    int y = min((k*l)/nl,c*d);
    cout<<min(y,p/np)/n;
    return 0;
} // namespace std;

