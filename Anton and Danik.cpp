#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, d=0, a=0;
	string status;
	cin >> n;
	cin >> status;
	for (int i = 0; i < n; i++)
	{
		if (status[i] == 'A')
			a++;
		else if (status[i] == 'D')
			d++;
	}
	if (a > d)
		cout << "Anton";
	else if (d > a)
		cout << "Danik";
	else
		cout << "Friendship";

}