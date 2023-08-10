#include <stdio.h>

int returnValue(int a)
{
    return a;
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    
    printf("Returned value is %d", returnValue(a));

}

