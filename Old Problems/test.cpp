#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(1);
    cout<<v[3];
    v.push_back(12);
    cout<<'\n'<<v[1];
    
}