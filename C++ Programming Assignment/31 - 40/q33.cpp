#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int n = 123, tmp;
    char c[10];
    int l, i, j, pr = 0;

    l = strlen(strrev(itoa(n, c, 10)));
    n = atoi(c);

    for (i = 0; i < l; i++, (n = n / 10))
    {
        for (j = i, tmp = n, pr = 0; j < l; j++, (tmp = tmp / 10))
        {
            pr = pr * 10 + (tmp % 10);
            cout << pr << "  ";
        }
    }
}
