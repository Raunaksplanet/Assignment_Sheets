#include <stdio.h>

int main()
{

    int a, *b, **c;
    printf("Enter a number: ");
    scanf("%d", &a);

    b = &a;
    c = &b;

    printf("\n\nValue of varible A: %d\n", a);
    printf("Value of varible A using pointer of pointer: %d\n", **c);
    printf("\n\naddress of varible A: %p\n", &a);
    printf("address of varible A using pointer of pointer: %p\n", *c);
}
