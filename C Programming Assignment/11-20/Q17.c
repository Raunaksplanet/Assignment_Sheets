//q1 
#include <stdio.h>
void main()
{
	char name[20],class[15];
	float eng,hind,math,per,total;

	printf("Enter student details---\n\n");
	printf("Enter student name: ");
	gets(name);
	printf("Enter student class: ");
	gets(class);
	printf("Enter student Hindi marks: ");
	scanf("%f",&hind);
	printf("Enter student English marks: ");
	scanf("%f",&eng);
	printf("Enter student Math marks: ");
	scanf("%f",&math);

	total = eng + hind + math;
	per = (total * 100) / 300;

	printf("\n\nStudent name: %s\n",name);
	printf("Student class: %s\n",class);
	printf("Hindi marks: %.2f\nEnglish marks: %.2f\nMath marks: %.2f",hind,eng,math);

	printf("\nTotal marks: %.2f\n",total);
	printf("Percentage: %.2f\n",per);

	if(per>60)
	printf("First divison\n");
	else if(per>=48)
	printf("Secound Divison\n");
	else if(per>=36)
	printf("Third Divison\n");
	else
	printf("Fail\n");
}
