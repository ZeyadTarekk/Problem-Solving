#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout <<fixed<< setprecision(6) << (2 * a + 3 * b) * 5 * c;
    return 0;
}
