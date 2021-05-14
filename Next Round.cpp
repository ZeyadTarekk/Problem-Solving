#include <iostream>
using namespace std;
int main()
{
	int grades[51];
	int no, k, count=0;
	cin >> no >> k;
	for (int i = 0; i < no; i++)
		cin >> grades[i];
	for (int i = 0; i < no; i++)
	{
	
		if ((grades[i] >= grades[k - 1])&&grades[i]>0)
			count += 1;
	}
	cout << count;
}