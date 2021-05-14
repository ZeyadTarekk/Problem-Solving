#include <iostream>
using namespace std;
int main()
{
	int x, indxi, indxj, moves = 0;
	bool status = true;
	bool status2 = true;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
		{
			cin >> x;
			if (x == 1)
			{
				indxi = i;
				indxj = j;
			}
		}
	while (status)
	{
		for (int i = 1; i <= 3; i++)
		{
			if (indxi < 3)
			{
				moves++;
				indxi++;
			}
			else if (indxi > 3)
			{
				moves++;
				indxi--;
			}
		}
		status = false;
	}
	while (status2)
	{
		for (int i = 1; i <= 3; i++)
		{
			if (indxj < 3)
			{
				moves++;
				indxj++;
			}
			else if (indxj > 3)
			{
				moves++;
				indxj--;
			}
		}
		status2 = false;
	}
	cout << moves;
}