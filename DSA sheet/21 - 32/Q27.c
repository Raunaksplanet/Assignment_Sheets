#include <stdio.h>
#include <string.h>
int main()
{
    char temp[20], str[20];
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]s", &str);

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            temp[j++] = str[i];
            if (str[i + 1] == '\0')
            {
                temp[j] = '\0';
                printf("%s ", strrev(temp));
            }
        }
        else
        {
            temp[j] = '\0';
            printf("%s ", strrev(temp));
            j = 0;
        }
    }
}
