#include<stdio.h>

int main(){
    int arr[3][3],arr2[3][3],i,j,multi[3][3];
    printf("Enter array 1 element: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("[%d][%d] -- ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter array 2 element: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("[%d][%d] -- ",i,j);
        scanf("%d",&arr2[i][j]);
        }
    }

   printf("\nMatrix 1 before Multiplication: \n");
    for (i=0; i<3;i++)
    {
        for (j=0; j<3;j++)
        {
        printf("%d  ", arr[i][j]);
        multi[i][j] = arr[i][j] * arr2[i][j];
        }
        printf("\n");
    }

    printf("\nMatrix 2 before Multiplication: \n");
    for (i=0; i<3;i++)
    {
        
        for (j=0; j<3;j++)
        {
        printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }
    
     printf("\nMatrix after Multiplication: \n");
    for (i=0; i<3;i++)
    {
        
        for (j=0; j<3;j++)
        {
             printf("%d  ", multi[i][j]);
        }
        printf("\n");
    }
}
