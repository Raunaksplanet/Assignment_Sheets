#include <stdio.h>
int main()
{
    char str[10];
    int i;

    printf("Enter a string: ");
    scanf("%s",&str);

    for(i=0;str[i] !='\0';i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
        {
            str[i] = '$';
        }
    }
    printf("%s",str);
}
