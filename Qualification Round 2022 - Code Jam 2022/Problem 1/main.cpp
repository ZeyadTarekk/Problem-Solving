#include <iostream>
#include <string>

using namespace std;

int main() {
    int test;
    cin >> test;
    for (int z = 0; z < test; z++) {
        int r, c;
        cin >> r >> c;
        string *arrStrings = new string[2 * r + 1];
        for (int i = 0; i < 2 * r + 1; i++) {
            for (int j = 0; j < 2 * c + 1; j++) {
                if ((i == 0 || i == 1) && (j == 0 || j == 1))arrStrings[i] += '.';
                else {
                    if (i % 2 == 0) {
                        if (j % 2 == 0) {
                            arrStrings[i] += '+';
                        } else {
                            arrStrings[i] += '-';
                        }
                    } else {
                        if (j % 2 == 0) {
                            arrStrings[i] += '|';
                        } else {
                            arrStrings[i] += '.';
                        }
                    }
                }
            }
        }
        if(z!=0)
            cout<<endl;
        cout<<"Case #"<<z+1<<':'<<endl;
        for (int i = 0; i < 2 * r + 1; ++i) {
            cout << arrStrings[i];
            if(i != 2*r)
                cout<<endl;
        }
    }
    return 0;
}
