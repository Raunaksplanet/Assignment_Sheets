#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n, *ptr, i;

    printf("Enter the size of Memory: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter Elements in array\n");
    for (i = 0; i < n; i++)
    {
        printf("Index no %d: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\nElements in array\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Index no %d: %d\n", i, ptr[i]);
    }

    printf("\n\nEnter the size of new Memory: ");
    scanf("%d", &n);

    ptr = (int *) realloc(ptr, n*sizeof(int));

    printf("Enter Elements in array\n");
    for (i = 0; i < n; i++)
    {
        printf("Index no %d: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\nElements in array\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Index no %d: %d\n", i, ptr[i]);
    }
}
