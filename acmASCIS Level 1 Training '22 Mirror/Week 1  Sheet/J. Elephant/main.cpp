#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = n / 5;
    n %= 5;
    ans += n / 4;
    n %= 4;
    ans += n / 3;
    n %= 3;
    ans += n / 2;
    n %= 2;
    ans += n;
    cout << ans;
    return 0;
}
