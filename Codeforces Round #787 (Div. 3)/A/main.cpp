#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (x == 0 && y == 0) {
            cout << "YES\n";
            continue;
        }
        x -= a;
        y -= b;
        if (x < 0) x = 0;
        if (y < 0) y = 0;
        c -= x;
        c -= y;
        if (c >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
