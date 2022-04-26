#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vec(5);
    while(n--){
        for(int i=0;i<5;i++)
            cin>>vec[i];
        sort(vec.begin(),vec.end());
        cout<<vec[3]*vec[4]<<endl;
    }
    return 0;
}
