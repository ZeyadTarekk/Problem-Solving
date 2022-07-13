#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << fixed << setprecision(6);
    double pi = 3.14159265358979323846;
    long long n, r;
    cin >> n >> r;
    cout << pi * r * r - n * n;
    return 0;
}
