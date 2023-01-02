#include <stdio.h>
int main()
{
    char arr[50];

    printf("Enter a string: ");
    gets(arr);

    printf("\nThe lowercase string is: %s", strlwr(arr));
}
