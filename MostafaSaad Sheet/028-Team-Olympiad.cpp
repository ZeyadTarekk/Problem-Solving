#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v1;
    int no1 = 0, no2 = 0, no3 = 0;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            no1++;
        else if (arr[i] == 2)
            no2++;
        else
            no3++;
    }
    int noOfTeams = min(min(no1, no2), no3);
    if (noOfTeams == 0)
        cout << 0;
    else
    {
        cout << noOfTeams << '\n';
        for (int i = 0; i < n; i++)
        {
            pair<int, int> p1;
            p1.first = arr[i];
            p1.second = i + 1;
            v1.push_back(p1);
        }
        sort(v1.begin(), v1.end());
        int** arrofarr = new int* [noOfTeams];
        for (int i = 0; i < noOfTeams; i++)
            arrofarr[i] = new int[3];
        arrofarr[0][1] = 5;
        int j = 0;
        for (int i = 0; i < noOfTeams; i++)
        {
            arrofarr[i][0] = v1[i].second;
        }
        j = 0;
        for (int i = 0; i < noOfTeams; i++)
        {
            while (v1[j].first != 2)
                j++;
            arrofarr[i][1] = v1[j++].second;
        }
        j = 0;
        for (int i = 0; i < noOfTeams; i++)
        {
            while (v1[j].first != 3)
                j++;
            arrofarr[i][2] = v1[j++].second;
        }
        for (int i = 0; i < noOfTeams; i++)
        {
            cout << arrofarr[i][0] << ' ' << arrofarr[i][1] << ' ' << arrofarr[i][2] << '\n';
        }
    }
    return 0;
}