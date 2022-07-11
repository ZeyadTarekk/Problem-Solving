#include <iostream>

using namespace std;

int main() {
    unsigned long long n, m, x;
    cin >> n >> m >> x;
    if (m % 2 != 0)
        m++;
//    cout << ((m + (x - 1)) % n) + 1;
    cout << (((m % n) + ((x - 1) % n)) % n) + 1;

    return 0;
}
