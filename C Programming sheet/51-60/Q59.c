#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20];
    printf("Enter a string: "); scanf("%s", &a);
    strcpy(b,a);
    strrev(b);
    (strcmp(a,b) == 0)?printf("String is palindrome"):printf("String is not palindrome");
    
}
