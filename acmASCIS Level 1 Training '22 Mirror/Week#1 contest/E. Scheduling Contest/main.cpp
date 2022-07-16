#include <iostream>
#include <string>

using namespace std;

int main() {
    int h;
    string m, xm;
    cin >> h >> m >> xm;
    if (xm[0] == 'A')
        if (h == 12)
            cout << "00" << ':' << m;
        else {
            if (h < 10)
                cout << '0' << h << ':' << m;
            else
                cout << h << ':' << m;
        }

    else {
        if (h == 12)
            cout << 12 << ':' << m;
        else
            cout << (h + 12) << ':' << m;
    }

    return 0;
}
