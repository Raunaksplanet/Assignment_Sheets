#include <stdio.h>
void main()
{
    char name[20], clas[15];
    float e, h, m, per, total;
    printf("Enter Student Details\n");
    printf("\nEnter Student Name -- ");
    gets(name);
    printf("\nEnter Student Class -- ");
    gets(clas);
    printf("\nEnter Hindi Marks -- ");
    scanf("%f", &h);
    printf("\nEnter English Marks --");
    scanf("%f", &e);
    printf("\nEnter Maths Marks -- ");
    scanf("%f", &m);
    total = e + h + m;
    per = (total * 100) / 300;
    printf("Student Name -- %s\n", name);
    printf("Student Class -- %s\n", clas);
    printf("Hindi Marks -- %.2f\n", h);
    printf("English Marks -- %2.f\n", e);
    printf("Maths Marks -- %2.f\n", m);
    printf("Total Marks -- %2.f\n", total);
    printf("Percentage -- %2.f\n", per);
    if (per >= 60)
        printf("\nFirst Division\n");
    else if (per >= 48)
        printf("\nSecond Division\n");
    else if (per >= 36)
        printf("\nThird Division\n");
    else
        printf("\nFail\n");
}
