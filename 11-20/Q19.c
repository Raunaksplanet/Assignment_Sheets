#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    if(a>=0 && a<=9)
    printf("Given number is one digit");
    else if(a>=10 && a<=99)
    printf("Given number is two digit");
    else if(a>=100 && a<=999) 
    printf("Given number is three digit");
    else 
    printf("Given number is more then three digit");

}
