#include <iostream>
using namespace std;
int main()
{
	int nums[1001];
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	x = n - 1;
	for ( x = x; x >= 0; x--)
		cout << nums[x] << " ";
}