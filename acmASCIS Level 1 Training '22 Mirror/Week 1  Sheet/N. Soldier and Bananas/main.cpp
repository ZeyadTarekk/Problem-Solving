#include <iostream>

using namespace std;

int main() {
    long long k, w;
    long long n;
    cin >> k >> n >> w;
    long long sum = (w * (w + 1)) / 2;
    if (sum * k > n)
        cout << sum * k - n;
    else
        cout << 0;
    return 0;
}
