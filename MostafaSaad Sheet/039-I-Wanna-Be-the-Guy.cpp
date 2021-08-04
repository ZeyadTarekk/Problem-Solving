#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2;
    int* arr1 = new int[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr1[i];
    cin >> n3;
    int* arr2 = new int[n3];
    for (int i = 0; i < n3; i++)
        cin >> arr2[i];
    int* arr3 = new int[n2 + n3];
    int j = 0;
    for (int i = 0; i < n2; i++)
    {
        arr3[j] = arr1[i];
        j++;
    }
    for (int i = 0; i < n3; i++)
    {
        arr3[j] = arr2[i];
        j++;
    }
    sort(arr3, arr3 + (n2 + n3));
    int no;
    if (n2!=0||n3!=0)
    {
        no = 1;
        for (int i = 1; i < (n2 + n3); i++)
        {
            if (arr3[i] != arr3[i - 1])
                no++;
        }
    }
    else
        no = 0;
    if (no >= n1)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}