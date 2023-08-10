#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("Wrong input");
    }
}
