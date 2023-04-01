#include<stdio.h>
#include<stdlib.h>
int main()
{
 
    int n,i,j;
    char str[10];

    printf("Enter a number: ");
    scanf("%d",&n);

    itoa(n,str,10);

    for(i=0;str[i+1] !='\0';i++)
    {
        for(j=i+1;str[j] !='\0';j++)
        {
            printf("[%c,%c], ",str[i],str[j]);
        }
    }
    printf("\b\b ");

}
// q28
