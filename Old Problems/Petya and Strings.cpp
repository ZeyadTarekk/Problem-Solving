#include<iostream>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
int main()
{
	string w1, w2;
	int y, status=0;
	cin >> w1 >> w2;
	for (int i = 0; i < w1.size(); i++)    //    transform(x.begin(), x.end(), x.begin(), ::tolower)
		w1[i] = tolower(w1[i]);
	for (int i = 0; i < w2.size(); i++)  //    transform(y.begin(), y.end(), y.begin(), ::tolower)
		w2[i] = tolower(w2[i]);
	y = size(w1);
	for (int i = 1; i <= y; i++)
	{
		if (w1[i - 1] > w2[i - 1])
		{
			status = 1;
			break;
		}
		else if (w1[i - 1] < w2[i - 1])
		{
			status = -1;
			break;
		}
	}
	cout << status;
}