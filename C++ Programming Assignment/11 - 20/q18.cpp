#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            ((i+j) % 2 == 0) ? cout << "1 " : cout << "0 ";
        }
        cout << endl;
    }

    cout << "\n\n";

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n\n";

    int u = 6, k = 0;
    for (int i = 1; i < u; i++)
        cout << setw(u - i) << setfill(' ') << "*" << setw(i + k++) << setfill('*') << "\n";
}
