#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], n = 10, i, j, temp;
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nArray Elements after sorting are\n");
    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        for (j = i; j > 0; j--)
        {
            if (temp < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%d ", arr[j]);
            getch();
        }
    }
}
