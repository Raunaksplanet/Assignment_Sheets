#include <stdio.h>
void main()
{
    int limit, i, rev, n;
    printf("Enter a limit: ");
    scanf("%d", &limit);
    for (i = 0; i <= limit; i++)
    {
        n = i * i * i;
        for (; n > 0; (n = n / 10))
        {
            if ((n % 10) != 0)
                break;
            else
                printf("0");
        }
        for (rev = 0; n > 0; (n = n / 10))
            rev = rev * 10 + (n % 10);
        printf("%d ", rev);
    }
}
