#include<iostream>
using namespace std;
int main()
{
    int k, r, no = 1;
    cin >> k >> r;
    int pr = k;
    while (true)
    {
        if (pr % 10 == r|| pr % 10 == 0)
            break;
        else
        {
            pr += k;
            no++;
        }
    }
    cout << no;
}