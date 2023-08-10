#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[12],i,n=10;

    printf("Enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }

    for(i=0;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    printf("\n\nElements in array\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

}
