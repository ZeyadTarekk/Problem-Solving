#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string a, b, s, e, r;
    int na, nb, nr;
    cin >> a >> s >> b >> e >> r;
    na = stoi(a);
    nb = stoi(b);
    nr = stoi(r);
    if (s == "+") {
        if (na + nb == nr)
            cout << "Yes";
        else
            cout << na + nb;
        return 0;
    } else if (s == "-") {
        if (na - nb == nr)
            cout << "Yes";
        else
            cout << na - nb;
        return 0;
    } else {
        if (na * nb == nr)
            cout << "Yes";
        else
            cout << na * nb;
        return 0;
    }
}
