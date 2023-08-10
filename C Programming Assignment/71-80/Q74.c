#include <stdio.h>
#include <strings.h>
struct juniors
{
    int marks;
    char name[20];
    float percentage;
};

struct seniors
{
    int MARKS;
    char NAME[20];
    float PERCENTAGE;
};

int main()
{
    // First structure
    struct juniors first;

    // second structure
    struct seniors second;
    printf("Enter first student details:\n");

    printf("Enter student marks: ");
    scanf("%d", &first.marks);

    printf("Enter student name: ");
    scanf("%s", &first.name);

    printf("Enter student percentage: ");
    scanf("%f", &first.percentage);

    // copying data from one structure to another
    second.MARKS = first.marks;
    strcpy(second.NAME, first.name);
    second.PERCENTAGE = first.percentage;
}
