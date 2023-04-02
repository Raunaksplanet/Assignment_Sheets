#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[12],i,n=10,data;

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

    printf("\n\nEnter data: ");
    scanf("%d",&data);

    for(i=n;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[0] = data;
    n++;

    printf("Elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }

}
