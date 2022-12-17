#include<stdio.h>

int main(){
    int arr[3][3],aar[3][3],i,j;
    printf("Enter array element: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("[%d][%d] -- ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        aar[j][i] = arr[i][j];
        }
    }

    printf("Array element are:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d ",aar[i][j]);
    }
    
}
