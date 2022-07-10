#include <iostream>

using namespace std;

int main() {
    long double s, d;
    cin >> d >> s;
    if (s * 3 >= 2 * d) {
        cout << "Sunny Day";
    } else if (s * 3 <= d) {
        cout << "Rainy Day";
    } else {
        cout << "Cloudy Day";
    }
    return 0;
}
