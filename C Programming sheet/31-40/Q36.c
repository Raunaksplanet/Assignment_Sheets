#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10], i, j, count;
    printf("Enter 10 integers: \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    system("cls");
    
    printf("Elements in array \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }


    printf("\n\nPrime elements in the array\n");
    for (i = 0; i < 10; i++)
    {
        count = 0;
        if (arr[i] < 2)
            continue; 
        for (j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
                break;
            }
        }
        (count == 0)?printf("%d ", arr[i]):j;
    }
}
