#include <stdio.h>

struct student
{
    int marks;
    char name[20];
    float percentage;
};

int main()
{
    
    struct student first[3];
    printf("Enter first student details:\n");

    printf("Enter student marks: ");
    scanf("%d",&first[0].marks);

    printf("Enter student name: ");
    scanf("%s",&first[0].name);

    printf("Enter student percentage: ");
    scanf("%f",&first[0].percentage);

    printf("\n\nEnter first student details:\n");

    printf("Enter student marks: ");
    scanf("%d",&first[1].marks);

    printf("Enter student name: ");
    scanf("%s",&first[1].name);

    printf("Enter student percentage: ");
    scanf("%f",&first[1].percentage);


    printf("\n\nEnter first student details:\n");

    printf("Enter student marks: ");
    scanf("%d",&first[2].marks);

    printf("Enter student name: ");
    scanf("%s",&first[2].name);

    printf("Enter student percentage: ");
    scanf("%f",&first[2].percentage);

    
    printf("first student details are:\n");
    printf("student marks: %d\n", first[0].marks);
    printf("student name: %s\n", first[0].name);
    printf("student percentage: %.2f", first[0].percentage);

    printf("\n\nSecond student details are:\n");
    printf("student marks: %d\n", first[1].marks);
    printf("student name: %s\n", first[1].name);
    printf("student percentage: %.2f", first[1].percentage);

    printf("\n\nThird student details are:\n");
    printf("student marks: %d\n", first[2].marks);
    printf("student name: %s\n", first[2].name);
    printf("student percentage: %.2f", first[2].percentage);

}
