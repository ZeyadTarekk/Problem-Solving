#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int ans = 0;
        int n;
        cin >> n;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        bool flag = true;
        for (int i = n - 1; i > 0; i--) {
            if (vec[i] <= vec[i - 1]) {
                while (vec[i] <= vec[i - 1]) {
                    if (vec[i] == 0 && vec[i - 1] == 0) {
                        flag = false;
                        break;
                    }
                    vec[i - 1] = vec[i - 1] / 2;
                    ans++;
                }
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (vec[i] >= vec[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
