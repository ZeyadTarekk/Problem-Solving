#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    double log2w = log2(x);
    int log2I = log2(x);

    if (log2w == log2I)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
