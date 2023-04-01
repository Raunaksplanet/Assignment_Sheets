#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[10], n = 10, i, j, pos;
    printf("Enter elements in array\n");

    for (i = 0; i < n; i++)
    {
        printf("Index No %d: ", i);
        scanf("%d", &arr[i]);
    }
    system("cls");
    printf("Array Elements are\n");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n\nEnter a position to delete element: ");
    scanf("%d", &pos);

    for (i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("\nArray Elements After deletion\n\n");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
