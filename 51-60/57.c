#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],b[20];
    printf("Enter 1 string: "); scanf("%s", &a);
    printf("Enter 2 string: "); scanf("%s", &b);

    (strcmp(b,a) == 0)?printf("Both strings are same\n"):printf("Both strings are not same\n");
}
