#include<stdio.h>
#include<math.h>
int main()
{
 
    int arr[3][3];
    int i,j,n=153,temp,len=0,arm;
    double d;

    printf("Enter array elements--\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }   

    printf("Array elements--\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("Armstrong Matrix Elements---\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp = n = arr[i][j];
            for(len=0;n>0;(n++),(n=n/10));
            n = temp;

            for(arm=0,d=0;n>0;(n = n / 10))
            {
                d = pow((n%10),len);
                arm = arm + ((int)d);
            }
            if(temp == arm)
            printf("%d\t", temp);
            else
            printf("\t");
        }
    }
}

// q21