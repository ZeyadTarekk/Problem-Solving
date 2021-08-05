#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		long long* arr = new long long[n];
		vector<long long>v1;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n-1; i++)
		{
			v1.push_back(max(arr[i], arr[i + 1]) * min(arr[i], arr[i + 1]));
		}
		sort(v1.begin(), v1.end());
		cout << v1.back() << '\n';
	}
}