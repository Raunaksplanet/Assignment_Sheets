#include<stdio.h>
int main()
{
    
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int *p = &a;

    printf("Value of varible A is %d\n", *p);
    printf("address of varible A is %x\n", p);
    printf("address of pointer P is %x", &p);

}
