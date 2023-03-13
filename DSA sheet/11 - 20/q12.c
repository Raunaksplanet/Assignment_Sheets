#include <stdio.h>
int main()
{

    int arr[10], i, j, data, count = 0, st = 0, stp = 9, mid = 0, temp;

    printf("Enter elements in array--\n\n");
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
    printf("Enter data you want to find: ");
    scanf("%d", &data);

    while (st <= stp)
    {
        mid = (stp + st) / 2;

        if (data == arr[mid])
        {
            printf("Data Found\n");
            count++;
            break;
        }
        else if (data > arr[mid])
        {
            st = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
        printf("%d  %d\n", st, stp);
    }
    if (count == 0)
    {
        printf("Data not found");
    }
}
//q12