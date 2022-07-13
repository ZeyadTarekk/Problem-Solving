//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    char x, y;
    cin >> x >> y;
    int x1 = x - 'a' + 1;
    int x2 = y - '0';
    int ans = min(8-x2,8-x1)+min(x1-1,8-x2)+min(8-x1,x2-1)+min(x2-1,x1-1);
    cout << ans;
    return 0;
}
