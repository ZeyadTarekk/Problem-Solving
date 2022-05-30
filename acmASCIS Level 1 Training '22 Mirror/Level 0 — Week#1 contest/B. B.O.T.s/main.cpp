#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    long long b, o, t;
    vector<pair<long long, char>> vec(3);
    cin >> vec[0].first >> vec[1].first >> vec[2].first;
    vec[0].second = 'b';
    vec[1].second = 'o';
    vec[2].second = 't';
    sort(vec.begin(), vec.end());
//    cout << vec[0].first << " " << vec[1].first << " " << vec[2].first << endl;
    if(vec[1].second=='b')
        cout<<"Bedo\n";
    else if(vec[1].second=='o')
        cout<<"Omar\n";
    else
        cout<<"Tarek\n";


    return 0;
}
