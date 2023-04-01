#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[10], i, j, data, count = 0, f = 0, l = 9, mid = 0, temp;

    printf("Enter elements in array\n");
    for (i = 0; i < 10; i++)
    {
        printf("Index No %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    system("cls");
    printf("Elements in array are\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n\nEnter data you want to find: ");
    scanf("%d", &data);

    mid = (l + f) / 2;
    while (f <= l)
    {
        if (data == arr[mid])
        {
            printf("Data Found\n");
            count++;
            break;
        }
        else if (data < arr[mid])
        {
            f = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
    }
    (count == 0) ? printf("Data not found") : f;
}
