#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int arr[3][3],i,j,sum[3];

    printf("Enter elements in Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    system("cls");

    printf("Elements in Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }


    printf("\nMaxium Elements in Matrix Column\n");
    for(i=0;i<3;i++)
    {
        sum[i] = 0;
        for(j=0;j<3;j++)
        {
            printf("%d  ", arr[i][j]);
            sum[i] = sum[i] + arr[j][i]; 
        }
        printf("\n");
    }
    printf("----------\n");

    for(i=0;i<3;i++)
    {
        printf("%d  ", sum[i]);
    }

}
