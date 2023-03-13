#include<stdio.h>

int main(){
    int arr[3][3],i,j,sum = 0;
    printf("Enter array element: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("[%d][%d] -- ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
    printf("Array element are:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
        sum = sum + arr[i][j];
        printf("%d ",arr[i][j]);
        }
        printf("-- %d",sum);
    }    
}
