#include <iostream>

using namespace std;
int main()
{
	int n, s;
	long long t, a, b, sum;
	cin >> n;
	while (n--)
	{
		sum = 0;
		cin >> t >> s;
		cin >> a;
		for (int i = 1; i < s; i++)
		{
			cin >> b;
			if (a == b)
			{
				sum += 1;
			}
			else if (a > b)
			{
				sum = sum + min(a - b + 1, t + b - a - 1);
			}
			else
			{
				sum = sum + min(b - a - 1, t + a - b + 1);
			}
			a = b;
		}
		cout << sum << "\n";
	}
	return 0;
}