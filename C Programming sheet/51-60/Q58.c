#include <stdio.h>
int main()
{

    char str[20];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++);

    int temp = i;
    for (i = temp; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
