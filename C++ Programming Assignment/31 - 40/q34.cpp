#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter a number: ";
    cin >> b;
    for (int i = 0; i <= b; i++)
    {
        (i <= 9) ? cout << "0" << i << ", " : cout << i << ", ";
    }
    cout << "\b\b.  ";
}
