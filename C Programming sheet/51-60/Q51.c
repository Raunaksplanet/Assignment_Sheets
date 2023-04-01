#include <stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3], i, j, k, r1, r2, c1, c2;

    printf("Enter Matrix 1 Column and row: ");
    scanf("%d %d", &c1, &r1);
    printf("Enter Matrix 2 Column and row: ");
    scanf("%d %d", &c2, &r2);

    if (c1 == r2)
    {
        printf("Enter Matrix 1 element\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Index No[%d][%d]: ",i,j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter Matrix 2 element\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("Index No[%d][%d]: ",i,j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("Matrix element after multiplication\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d  ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Dimensions are not equal");
    }
}
