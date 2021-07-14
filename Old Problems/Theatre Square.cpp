#include <iostream>
using namespace std;
int main()
{
	int m, n, a;
	int x, y;
	cin >> m >> n >> a;
	x = m / a;
	y = n / a;
	if (m % a != 0)
		x++;
	if (n % a != 0)
		y++;
	
	cout << (long long )x * y;
}