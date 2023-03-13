#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int arr[10],n=10,j,i,k;
    
    printf("Enter array elements--\n\n");

    for(i=0;i<n;i++)
    {
        printf("Index No %d: ",i);
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++)
        {
            if(arr[i] == arr[j])
            {
                system("cls");
                printf("Enter array elements--\n\n");
                for(k=0;k<i;k++)
                {
                    printf("Enter %d Element -- %d\n",k,arr[k]);
                }
                i--;
            }
        }
    }

    printf("\n\nArray element--\n\n");
    for(i=0;i<n;i++)
    {
        printf("[%d] -> %d  ",i,arr[i]);
    }

}
// q24