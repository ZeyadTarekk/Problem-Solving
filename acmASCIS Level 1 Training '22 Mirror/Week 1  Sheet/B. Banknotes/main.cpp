#include<iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = n / 50;
    n = n % 50;
    ans += n / 20;
    n = n % 20;
    ans += n;
    cout << ans;
    return 0;
}