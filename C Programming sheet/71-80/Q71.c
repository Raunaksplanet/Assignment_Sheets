#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    int fact = factorial(num);
    printf("Factorial of %d = %d\n", num, fact);
}
