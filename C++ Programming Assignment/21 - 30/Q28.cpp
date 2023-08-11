#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a1[3][3], i, j, k=2, sum = 0, num;

    cout << "Enter Data: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a1[i][j];
        }
    }

    cout << "\nElements are: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a1[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\nDiagonal Elements are: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i==j)
            {
                cout << setw(k++) << a1[i][j] << "  ";
            }
        }
        cout << endl;
    }
}
