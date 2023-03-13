#include<stdio.h>
int main()
{
 
    int arr[10], n = 10, i, j, m1 = 0,m2 = 0;
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

    for(i=0;i<n;i++)
    {
        if(arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
        }
        else if(arr[i] > m2 && arr[i] < m1)
        {
            m2 = arr[i];
        }
    }

    printf("\n\n2nd maxium in Array: %d", m2);
}
// q28