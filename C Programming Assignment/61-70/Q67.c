#include <stdio.h>

int swap(int *x, int *y)
{

    int f;
    f = *x;
    *x = *y;
    *y = f;
    printf("\nAfter\nA = %d B = %d", *x, *y);
}

int main()
{

    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    printf("Before\nA = %d B = %d", a, b);
    swap(&a, &b);
}
