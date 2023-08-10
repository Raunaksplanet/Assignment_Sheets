#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n = 10, i, arr[10];

    printf("Enter Elements in array\n");
    for (i = 0; i < n; i++)
    {
        printf("Index no %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
