#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b - c == d) {
        cout << "YES";
        return 0;
    } else if (a - b + c == d) {
        cout << "YES";
        return 0;
    } else if (a * b + c == d) {
        cout << "YES";
        return 0;
    } else if (a + b * c == d) {
        cout << "YES";
        return 0;
    } else if (a * b - c == d) {
        cout << "YES";
        return 0;
    } else if (a - b * c == d) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }
}
