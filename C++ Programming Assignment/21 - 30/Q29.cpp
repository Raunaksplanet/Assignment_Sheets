#include <iostream>

int main()
{
    using namespace std;

    int a[3][3], b[3][3], c[3][3], i, j, k, r1, r2, c1, c2;

    cout << "Enter Matrix 1 Column and row: ";
    cin >> c1 >> r1;
    cout << "Enter Matrix 2 Column and row: ";
    cin >> c2 >> r2;

    if (c1 == r2)
    {
        cout << "Enter Matrix 1 elements:" << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cout << "Index No[" << i << "][" << j << "]: ";
                cin >> a[i][j];
            }
        }

        cout << "Enter Matrix 2 elements:" << endl;
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << "Index No[" << i << "][" << j << "]: ";
                cin >> b[i][j];
            }
        }

        cout << "Matrix elements after multiplication:" << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
                cout << c[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Dimensions are not equal" << endl;
    }

    return 0;
}
