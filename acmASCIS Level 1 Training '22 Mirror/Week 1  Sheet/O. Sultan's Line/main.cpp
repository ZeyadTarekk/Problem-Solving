#include <iostream>

using namespace std;

int main() {
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((y2 - y1) * (x2 - x3) == (y2 - y3) * (x2 - x1))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
