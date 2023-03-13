#include<stdio.h>
int main()
{
    int pos,i,arr[10], temp[10];
    printf("Enter array elements--\n\n");

    for(i=0;i<10;i++)
    {
        printf("Index No [%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter position to shift data: "); scanf("%d",&pos);

    for(i=0;i<pos;i++)
    {
        temp[i] = arr[i];
    }

    for(i=pos;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }

    for(i=0;i<pos;i++)
    {
        printf("%d  ",temp[i]);
    }
    
}
// q32