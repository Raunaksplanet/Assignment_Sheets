#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10],temp,i,j,k;
    char c;
    printf("Enter Array Elements ----\n\n");
    for (i=0; i < 10; i++)
        scanf("%d",&arr[i]);
    printf("\n\nArray Elements Are--\n\n");
    for (i=0; i<10; i++)
        printf("%d ",arr[i]);
    printf("\n\n----Sorting Operations----\n\n");
    printf("1.Selection Sorting...\n\n");
    printf("2.Bubble Sorting...\n\n");
    printf("3.Exit...\n\n");
    printf("Enter Key to perform operations..\n\n");
    c=getch();
    if (c =='1')
    {
        printf("---You Select Selection Sorting..\n\n");
        printf("---After Sorting Array Elements Are..\n\n");
        for ( i =0; i<10; i++)
        {
            for(j = i +1; j < 10 ; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (i = 0; i< 10; i++)
            printf("%d ",arr[i]);
    }
    else if (c == '2')
    {
        printf("----You Select Bubble Sorting..\n\n");
        printf("After Sorting Array Elements are --\n\n");
        for ( i=0; i < 10-1; i++)
        {
            for (j=i+1; j <10-1; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for ( i = 0; i < 10; i++)
            printf("%d ",arr[i]);
    }
    else if (c== '3')
    {
        exit(0);
    }
    else
        printf("wrong input");
}
