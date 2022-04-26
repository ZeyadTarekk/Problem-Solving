#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    bool status;
    while (n--) {
        status = true;
        cin >> s;
        if(s.size()==1){
            cout<<"Yes\n";
            continue;
        }
        sort(s.begin(), s.end());
//        cout<<s<<endl;
        for (int i = 0; i < s.size() - 1; i++) {
            if ((int) s[i] != (int) s[i + 1]-1)
                status = false;
        }
        if(status)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
