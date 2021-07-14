#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n , m , z;
    cin>>n>>m>>z;
    vector<int>v1;
    vector<int>v2;
    int count = 0;
    if(n==m)
        cout<<z/n;
    else
    {
        int x = 1;
        while((x*n)<=z)
        {
            v1.push_back(x*n);
            x++;
        }
        int y = 1;
        while((y*m)<=z)
        {
            v2.push_back(y*m);
            y++;
        }
        for(int i = 0 ; i<v1.size();i++)
            for(int j = 0 ;j<v2.size();j++)
                if(v1[i]==v2[j])
                    count++;
        cout<<count;
    }

    return 0;
}