#include <iostream>

using namespace std;

int main() {
    int no, n1, n2;
    cin >> no;
    while (no--) {
        cin >> n1 >> n2;
        if (n1 == n2 || n1 % n2 == 0)
            cout << 0 << endl;
        else if (n1 < n2)
            cout << n2 - n1 << endl;
        else
            cout << (n1 + (n2 - n1 % n2)) - n1 << endl;
    }
    return 0;
}
