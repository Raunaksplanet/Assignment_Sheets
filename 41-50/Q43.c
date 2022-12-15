#include <stdio.h>
void main()
{
    int n, temp = n, r = 0, arr[10], i = 0, j, s;
    printf("Enter a number: "); scanf("%d",&n);
    while (n > 0)
    {
        r = r * 10 + (n % 10);
        n = n / 10;
    }
    while (r > 0)
    {
        arr[i++] = r % 10;
        r = r / 10;
    }
    r = 0;
    for (j = 0; j < i; j++)
    {
        for (s = j, r = 0; s < i; s++)
        {
            r = r * 10 + arr[s];
            printf("%d \t", r);
        }
    }
}
