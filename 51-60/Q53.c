#include <stdio.h>
void main()
{
    char arr[20];
    printf("Enter a string: "); scanf("%[^\n]s",arr);
    printf("%s",arr);
}
