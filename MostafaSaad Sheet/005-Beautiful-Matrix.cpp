#include<iostream>
using namespace std;
int main()
{
	int x, i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			cin >> x;
			if (x == 1)
				break;
		}
		if (x == 1)
			break;
	}
	cout << abs(i - 3) + abs(j - 3);
}