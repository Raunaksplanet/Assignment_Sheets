#include <stdio.h>
void main()
{
    int arr[10];
    int n = 9, i, c = 0, data, counter = 0;
    printf("Enter a element: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter data ypu want to find: "); scanf("%d",&data);
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("data Found");
            c++;
        }
    }
    if (c == 0)
        printf("data not found");
}
