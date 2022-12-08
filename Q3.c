#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First number: "); scanf("%d",&a);
    printf("Enter Secound number: "); scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("First number is: %d\n",a); 
    printf("Secound number is: %d",b);
}
