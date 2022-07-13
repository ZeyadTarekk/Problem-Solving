#include <bits/stdc++.h>

using namespace std;

int main() {
    long long r, s;
    cin >> r >> s;
    if (2 * r >= sqrt(2) * s) {
        cout << "Circle";
    } else if (2 * r <= s) {
        cout << "Square";
    } else
        cout << "Complex";

    return 0;
}
