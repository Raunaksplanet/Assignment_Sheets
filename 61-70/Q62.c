#include <stdio.h>
void main()
{
    int limit, i, c, a = 0, b = 1;
    printf("Enter a limit: ");
    scanf("%d", &limit);
    for (i = 0; i <= limit; i++)
    {
        if (i <= 1)
            printf("%d ", i);
        else
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}
