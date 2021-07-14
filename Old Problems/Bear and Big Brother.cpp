#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int years = 0;
	cin >> a >> b;
	bool status = true;
	while (status)
	{
		a = 3 * a;
		b = 2 * b;
		years++;
		if (a > b)
			status = false;
	}
	cout << years;
}