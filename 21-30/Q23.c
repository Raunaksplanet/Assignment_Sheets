#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: "); scanf("%c",&a);

    if(a >= '0' && a<='9')
    printf("Given character is number");
    else if(a >= 'a' || a >= 'A' && a >= 'z' || a >= 'Z')
    printf("Given character is alphabet");
    else 
    printf("Given character is special character");
}
