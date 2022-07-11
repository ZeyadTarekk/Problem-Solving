#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long divA = n / a;
    long long divB = n / b;
    long long lcm = a * b / __gcd(a, b);
    long long divAB = n / lcm;
    long long ans = (divA - divAB) * p + (divB - divAB) * q + divAB * max(p, q);
    cout << ans;

    return 0;
}
