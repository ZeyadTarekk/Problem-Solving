#include <iostream>
using namespace std;
int main()
{
	int n, i = 1;
	int p, v, t, sum=0;
	cin >> n;
	if (n >= 1)
	{
		while (i <= n)
		{
			cin >> p >> v >> t;
			if ((p + v + t) >= 2)
			{
				sum += 1;
			}
			i++;
		}

	}
	else
		cout << "Enter a no.";
	cout << sum;


}