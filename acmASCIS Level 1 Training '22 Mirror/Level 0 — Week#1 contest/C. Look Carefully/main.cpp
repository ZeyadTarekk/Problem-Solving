#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "Chi";
    char x;
    cin >> x;

    if (s1.find(x) != string::npos)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
