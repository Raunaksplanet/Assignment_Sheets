#include<stdio.h>

int main(){
    int arr[3][3],i,j,sum[3];
    printf("Enter array element: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("[%d][%d] -- ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
   printf("\nSum of Columns Elements: ");
    for (i=0; i<3;i++)
    {
        sum[i] = 0;
        for (j=0; j<3;j++)
        {
            printf("%d ", arr[i][j]);
            sum[i] = sum[i] + arr[j][i];
        }
        printf("\n");
    }
    printf("---------\n");
    for (i=0;i<3;i++)
    {
        printf("%d ", sum[i]);
    }
}
