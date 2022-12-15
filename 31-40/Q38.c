#include <stdio.h>
void main()
{
    int arr[11], N = 10, i, data, p;
    printf("Enter array Elements Are: \n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Elementry are: \n");
    for (i = 0; i < N; i++)
        printf("%d\t", arr[i]);

        printf("\nEnte data you want to add: \n"); scanf("%d",&data);
        printf("\nEnte position number: \n"); scanf("%d",&p);

        printf("\n Array Insertion Element are --\n\n");

    for (i = N; i > p; i--)
        arr[i] = arr[i - 1];
    arr[p] = data;

    N++;
    for (i = 0; i < N; i++)
        printf("%d\t", arr[i]);
}
