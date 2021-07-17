#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    long long x;
    int n, t;
    vector<int> v1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> n;
        while (x > 0)
        {
            v1.push_back(int(ceil(x / float(n))));
            x -= ceil(x / float(n));
            n--;
        }
        for (int m = v1.size() - 1; m >= 0; m--)
            cout << v1[m] << ' ';
    }
}