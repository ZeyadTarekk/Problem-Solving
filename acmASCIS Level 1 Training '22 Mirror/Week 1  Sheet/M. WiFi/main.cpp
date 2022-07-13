#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    long double minDist = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
    if (minDist <= r1 + r2)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
