#include<iostream>
using namespace std;
int main()
{
    int cons1, cons2, no, charge ;
    int x[1000] = { 0 };
    cin >> cons1 >> cons2;
    cin >> no;
    for (int i = 0; i < no; i++) 
    {
        cin >> x[i];
        
    }
    for (int z = 0; z < no; z++)
    {
        if (x[z] <= 1000)
        {
            charge = x[z] * cons1;
        }
        else
        {
            charge = 1000 * cons1 + (x[z] - 1000) * cons2;
        }
        cout << x[z] << " " << charge << "\n";
    }

}