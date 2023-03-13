#include<stdio.h>
int main()
{
 
    int arr[10], n = 10, i, j, temp;
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

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n\nArray After Ascending sorting: \n\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
// q14