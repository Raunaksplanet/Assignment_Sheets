#include <iostream>
using namespace std;

int main()
{
    int a1[3][3], i, j;

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
            cout << i << j << "  ";
        }
        cout << endl;
    }

    cout << "\nDiagonal Elements are: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if((i+j == 2))
            {
                cout << a1[i][j] << "  ";
            }
            else
            cout << "  ";
        }
        cout << endl;
    }
}
