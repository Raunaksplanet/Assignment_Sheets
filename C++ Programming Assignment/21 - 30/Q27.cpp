#include <iostream>
using namespace std;

int main()
{
    int a1[3][3], i, j, k, sum = 0, num;

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

    cout << "\nPerfect Elements are: \n";
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            num = a1[i][j];
            sum = 0;
            for (int k = 1; k <= num / 2; ++k) {
                if (num % k == 0) {
                    sum += k;
                }
            }
            if (sum == num) {
                cout << num << " at position (" << i << ", " << j << ")" << endl;
            }
        }
        cout << endl;
    }
}
