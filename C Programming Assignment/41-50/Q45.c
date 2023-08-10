#include<stdio.h>

int main(){
    int arr[3][3],i,j;

    printf("Enter array element: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("[%d][%d] -- ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix is: ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            (i==j)?printf("%d\t",arr[i][j]):printf("  ");
        }
    }
}
