#include <stdio.h>

int returnSum(int *a, int *b)
{

    return *a + *b;
}

int main()
{
    int a, b;
    printf("Enter 2 number: ");
    scanf("%d%d", &a, &b);
    printf("Sum of two number is %d", returnSum(&a, &b));
}
