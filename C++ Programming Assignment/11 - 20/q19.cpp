#include <iostream>
using namespace std;

int main()
{
    int limit, i, rev, n;
    cout << "Enter a limit: ";
    cin >> limit;
    for (i = 0; i <= limit; i++)
    {
        n = i * i * i;
        for (; n > 0; (n = n / 10))
        {
            if ((n % 10) != 0)
                break;
            else
                cout << "0 ";
        }
        for (rev = 0; n > 0; (n = n / 10))
            rev = rev * 10 + (n % 10);
        cout << rev << "  ";
    }
}
