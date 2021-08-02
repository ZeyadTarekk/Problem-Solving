#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0, * arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int no = 0;
    sort(arr, arr + n);
    int sum2 = 0;
    for (int i = n-1; i >= 0; i--)
    {
        sum2 += arr[i];
        no++;
        if (sum2 > sum / 2.0)
            break;
    }
    cout << no << '\n';
    return 0;
}