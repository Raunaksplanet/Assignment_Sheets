#include <stdio.h>
#include <stdlib.h>
int main()
{

    int data, arr[10], i, n = 10, count = 0;

    printf("Enter elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements in array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEnter data: ");
    scanf("%d", &data);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            count++;
            printf("Data Found");
            break;
        }
    }

    (count == 0) ? printf("Data not found") : data;
}
