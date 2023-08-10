#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a starting limit: "); scanf("%d",&a);
    printf("Enter a ending limit: "); scanf("%d",&b);

    do
    {
        printf("%d\n",a);
        a++;
    } while (a<=b);
}
