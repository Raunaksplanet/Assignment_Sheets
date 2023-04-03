#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    printf("Enter first array element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Index No[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nEnter Second array element\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Index No[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n\nFirst array elements are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nsecond array elements are -- \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nAfter multipication array elements are\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }

    printf("\n\n show matrix with highlighted even number\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            (c[i][j] % 2 == 0) ? printf("[%d]  ", c[i][j]) : printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
