#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int x;
	string name;
	cin >> name;
	for (int i = 0; i < name.size(); i++)
		name[i] = tolower(name[i]);
	x = name.size();
	sort(name.begin(), name.end());
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == name[i + 1])
			x--;
	}
	if (x % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}