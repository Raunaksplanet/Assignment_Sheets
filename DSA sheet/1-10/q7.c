// q7
#include<stdio.h>
int main()
{
 
    int arr[15], n = 10, i, j, pos, data;
    printf("Enter elements in array---\n\n");
    
    for(i=0;i<n;i++)
    {
        printf("Index No [%d] -- ",i);
        scanf("%d",&arr[i]);
    }

    printf("Array Elements are---\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\n\nEnter a position to insert element: "); scanf("%d", &pos);
    printf("\nEnter a data to insert in element: "); scanf("%d", &data);

    for(i=n;i>pos-1;i--)
    {
        arr[i+1] = arr[i]; 
    }
    arr[pos] = data;
    n++;

    printf("Array Elements After insertion are---\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}