#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long* arr = new long long[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if(n==1||n==2)
      cout<<0;
    else
    {
    int no=0;
    sort(arr, arr + n);
    if(arr[0]==arr[n-1])
      cout<<0;
    else
    {
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            no++;
        else
            break;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] == arr[i - 1])
            no++;
        else
            break;
    }
    cout << n -(no+2);
    }
    }
    return 0;
}