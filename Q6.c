#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter First number: "); scanf("%d",&a);
    printf("Enter Secound number: "); scanf("%d",&b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("First number is: %d\n",a); 
    printf("Secound number is: %d",b);
}
