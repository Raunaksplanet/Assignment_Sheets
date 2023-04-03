#include <stdio.h>
#include <string.h>
int main()
{
    char str[10], tmp[10];

    printf("Enter a string: ");
    scanf("%s", &str);
    strcpy(tmp, str);
    strrev(tmp);

    (strcmp(str, tmp) == 0) ? printf("Palindrome") : printf("Not palindrome");
}
