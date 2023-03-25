#include <stdio.h>
int main()
{

    int a, b, c, d;

    printf("Enter Four Number: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("A is greater which is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is greater which is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is greater which is %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("D is greater which is %d", d);
    }
}
