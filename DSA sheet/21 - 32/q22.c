#include <stdio.h>
#include <string.h>
int main()
{
    int arr[4][4], i, j, tmp, m1, m2;

    printf("Enter elements in Matrix\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Elements in Matrix\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n2nd Maximum elements in Matrix\n");
    for (i = 0; i < 4; i++)
    {
        m1 = m2 = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", arr[i][j]);
            if (m1 < arr[i][j])
            {
                m2 = m1;
                m1 = arr[i][j];
            }
            else if (arr[i][j] > m2 && arr[i][j] < m1)
            {
                m2 = arr[i][j];
            }
        }
        printf("  --%d", m2);
        printf("\n");
    }
}
