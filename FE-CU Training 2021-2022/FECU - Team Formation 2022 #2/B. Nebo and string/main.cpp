#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (s.size() == 1 && k>0) {
        cout << 0;
        return 0;
    }
    if ((int) s[0] - 48 > 1 && k>0) {
        s[0] = '1';
        k--;
    }
    for (int i = 1; i < n; i++) {
        if (s[i] != '0' && k > 0) {
            s[i] = '0';
            k--;
        }
        if (k == 0)
            break;
    }
    cout << s;
    return 0;
}
