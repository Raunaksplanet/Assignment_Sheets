#include<stdio.h>
int main() 
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    if(a % 2 == 0)
    printf("Given number is even\n");
    else
    printf("Given number is not even\n");

    int b;
    printf("Enter a number: "); scanf("%d",&b);
    if(b % 3 == 0)
    printf("Given number is divisible by 3\n");
    else
    printf("Given number is not divisble by 3\n");

}
