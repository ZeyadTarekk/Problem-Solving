#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s1, s2;
	long long n;
	while (t--)
	{
		cin >> n;
		cin >> s1 >> s2;
		int no = 0;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = 0;
		for (int i = 0; i < n; i++)
		{
			if (s2[i] == '1')
			{
				if (s1[i] == '0' && arr[i] == 0)
				{
					no++;
					arr[i] = 1;
				}
				else if (i > 0 && i < n - 1)
				{
					if (s1[i - 1] == '1' && arr[i - 1] == 0)
					{
						arr[i - 1] = 1;
						no++;
					}
					else if (s1[i + 1] == '1' && arr[i + 1] == 0)
					{
						arr[i + 1] = 1;
						no++;
					}
				}
				else if (i == 0)
				{
					if (s1[i + 1] == '1' && arr[i + 1] == 0)
					{
						arr[i + 1] = 1;
						no++;
					}
				}
				else if (i == n - 1)
				{
					if (s1[i - 1] == '1' && arr[i - 1] == 0)
					{
						arr[i - 1] = 1;
						no++;
					}
				}
			}
		}
		cout << no << '\n';
	}
	return 0;
}