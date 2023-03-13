#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First number: "); scanf("%d",&a);
    printf("Enter Secound number: "); scanf("%d",&b);
    printf("Enter Third number: "); scanf("%d",&c);

    if(a>b)
    printf("First number is larger");
    else if(b>c)
    printf("Secound number is larger");
    else
    printf("third number is larger");
}
