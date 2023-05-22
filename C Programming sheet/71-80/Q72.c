#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error: Number of terms cannot be negative.\n");
        return 1;
    }
    printf("Fibonacci sequence: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
