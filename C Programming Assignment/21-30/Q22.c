// This code have some issue I will fix later if i get time.
#include <stdio.h>
void main()
{
    float tp, np, dis;
    char c;
    printf("Television Price Calculator..\n\n");
    printf("1. Color Television..\n");
    printf("2. Black & White Television.. \n");
    printf("3. Exit\n");
    c = getchar();
    switch (c)
    {
    case '1':
    {
        printf("\nYou Choose Color Television\n\n");
        printf("1. 24\" Television\n");
        printf("2. 32\" Television\n");
        c = getchar();
        if (c == '1')
        {
            printf("\nYou Choose 24\" Television");
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
            dis = (tp * 15) / 100;
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
        dis = (tp * 12) / 100;
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
