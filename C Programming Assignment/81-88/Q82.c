#include <stdio.h>

int main()
{
    int arr[5], i, j, temp;
    int *ptr = arr;

    printf("Enter %d elements:\n", 5);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Elements are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *ptr + i);
    }
}
