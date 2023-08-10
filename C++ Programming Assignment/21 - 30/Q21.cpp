#include <iostream>
using namespace std;

int main()
{

    int i, a, sum = 0;
    cout << "Enter a number: ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        cout << ("%d", i) << " X " << ("%d", i) << " = " << ("%d", i * i) << endl;
        sum = sum + (i * i);
    }
    cout << "The sum of above series is " << sum << endl;
}
