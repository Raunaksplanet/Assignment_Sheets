#include <iostream>
using namespace std;

int main()
{
    float tp, np, dis;
    char c;
    cout << "Television Price Calculator..\n\n";
    cout << "1. Color Television..\n";
    cout << "2. Black & White Television.. \n";
    cout << "3. Exit\n";
    c = getchar();
    switch (c)
    {
    case '1':
    {
        printf("\nYou Choose Color Television\n\n");
        printf("1. 21\" Television\n");
        printf("2. 32\" Television\n");
        c = getchar();
        if (c == '1')
        {
            printf("\nYou Choose 21\" Television");
            printf("\nEnter Television Price --");
            scanf("%f", &tp);
            dis = (tp * 10) / 100;
            np = tp - dis;
            printf("\nTelevision Price --\n\n");
            printf("total price -- %2.f", tp);
            printf("\nDiscount is -- %.2f", dis);
            printf("\n\nNet Price -- %.2f", np);
        }
        else if (c == '2')
        {
            printf("\nYou Choose 32\" Television");
            printf("\nEnter Television Price --");
            scanf("%f", &tp);
            dis = (tp * 20) / 100;
            np = tp - dis;
            printf("\nTelevision Price -- \n\n");
            printf("total price -- %2.f", tp);
            printf("\nDiscount is -- %.2f", dis);
            printf("\n\nNet Price -- %.2f", np);
        }
        break;
    case '2':
        printf("You Choose Black & White Television\n\n");
        printf("Enter Television Price --");
        scanf("%f", &tp);
        dis = (tp * 15) / 100;
        np = tp - dis;
        printf("\nTelevision Price -- \n\n");
        printf("total price -- %2.f", tp);
        printf("\nDiscount is -- %.2f", dis);
        printf("\n\nNet Price -- %.2f", np);
        break;
    case '3':
        break;
    default:
        printf("wrong input");
        break;
    }
    }
}
