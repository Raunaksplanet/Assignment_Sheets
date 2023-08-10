#include <stdio.h>
#include <string.h>
int main()
{

    char str[20];
    int a;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    a = strlen(str);


    printf("Ascaii value of given code is:\n");
    for(int i = 0; i < a; i++)
    {
        printf("%d  ",str[i]);
    }

}
