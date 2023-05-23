#include <stdio.h>
int main()
{
    int i;
    char *str[5][50];
    

    for (i = 0; i < 5; i++)
    {
        printf("Enter %d Name: ", i + 1);
        scanf("%s", *(str + i));
    }
    printf("\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d.Name: %s\n", i + 1, *(str + i));
    }
}

