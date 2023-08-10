#include <stdio.h>

int returnMax(int *a, int *b, int *c)
{

    if (*a > *b)
        return *a;
    else if (*b > *c)
        return *b;
    else
        return *c;
}

int main()
{
    int a, b, c;
    printf("Enter 3 number: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Maximum number is %d", returnMax(&a, &b, &c));
}
