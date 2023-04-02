#include <stdio.h>
#include <stdlib.h>
int main()
{

    int data, arr[10], i, n = 10,j,tmp;

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

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    
    printf("\nAfter Bubble sort Elements in array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

}
