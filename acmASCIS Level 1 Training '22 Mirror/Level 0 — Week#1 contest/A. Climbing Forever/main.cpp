#include <iostream>

using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long sum = n * (n + 1) / 2;
    long long number = n / a;
    long long remove = (number) * (2 * a + (number - 1) * a);
    long long add = (number) * (2 * b + (number - 1));
//    cout << remove / 2 << " " << add / 2 << endl;
    sum = sum + add / 2 - remove/2;
    cout << sum;
    return 0;
}