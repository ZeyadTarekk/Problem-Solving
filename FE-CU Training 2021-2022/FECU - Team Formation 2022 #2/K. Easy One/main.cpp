#include <iostream>
#include <cmath>

using namespace std;

int main() {
    freopen("max-pair.in", "r", stdin);
    int n;
    cin >> n;
    string s;
    bool status;
    while (n--) {
        status = false;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++) {
            for (int j = s.size() - 1; j > 0; j--) {
                if (s[i] != s[j]) {
                    cout << j - i << endl;
                    status = true;
                    break;
                }

            }
            if (status)
                break;
        }
        //        cout << ans << endl;

    }
    return 0;
}
