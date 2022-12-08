#include<stdio.h>
int main() 
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    if(a >22)
    printf("Given number is greater then 22\n");
    else
    printf("Given number is not greater then 22\n");

    if(a % 5 == 0)
    printf("Given number is divisible by 5\n");
    else
    printf("Given number is not divisble by 5\n");

}
