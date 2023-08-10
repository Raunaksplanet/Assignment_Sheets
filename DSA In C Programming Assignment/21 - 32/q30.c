#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10], n = 10, i, k, j, temp;
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("Index No %d: ", i);
        scanf("%d", &arr[i]);
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                i--;
                break;
            }
        }
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
        system("cls");
        printf("Run time Sorted array: \n");
        for (k = 0; k <= i; k++)
        {
            printf("Index No %d: %d\n", k, arr[k]);
        }
    }
}
