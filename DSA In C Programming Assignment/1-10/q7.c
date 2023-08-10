#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[12], n = 10, i, j, pos, data;
    printf("Enter elements in array\n");

    for (i = 0; i < n; i++)
    {
        printf("Index No %d: ", i);
        scanf("%d", &arr[i]);
    }
    system("cls");
    printf("\nArray Elements are\n");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEnter a position: ");
    scanf("%d", &pos);
    printf("Enter a data: ");
    scanf("%d", &data);

    for (i = n; i > pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = data;
    n++;

    printf("Array Elements are\n");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
