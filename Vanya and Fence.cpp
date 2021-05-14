#include<iostream>
using namespace std;
int main()
{
	int n, h, hn;
	cin >> n >> h;
	int sum = n;
	while (n--)
	{
		cin >> hn;
		if (hn > h)
			sum += 1;

	}
	cout << sum;
}