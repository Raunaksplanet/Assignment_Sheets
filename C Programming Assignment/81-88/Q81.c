#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    int sum = 0;

    printf("Enter %d elements:\n", 10);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 10; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of all elements: %d\n", sum);
}
