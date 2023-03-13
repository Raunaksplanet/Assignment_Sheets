#include <stdio.h>
int main()
{

    int i, j, counter = 0, len = 0;
    char str[10] = "naman", t[10];

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

    if (counter == len)
        printf("String %s is palindrome", str);
    else
        printf("String %s is not palindrome", str);
}
// q20