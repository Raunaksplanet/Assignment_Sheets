#include <stdio.h>
int main()
{

    int i, j, counter = 0, len = 0;
    char str[10], t[10];

    printf("Enter a string: ");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++);

    len = i;
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        t[j] = str[i];
    }

    t[j] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == t[i])
        {
            counter++;
        }
    }
    (counter == len) ? printf("Palindrome") : printf("Not Palindrome");
}
// q20
