#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string word;
	for(n=n; n>=1; n--)
	{
		cin >> word;
		if (word.size() > 10)
			cout << word[0] << word.size() - 2 << word[word.size() - 1] << "\n"; //cout << word.at(0) << word.size() - 2 << word.at(word.size() - 1) << "\n";
		else
			cout << word << "\n";
	}
}