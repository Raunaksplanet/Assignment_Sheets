#include<stdio.h>
int main()
{
    
    int a ,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int *p = &a;
    int *q = &b;

    printf("The sum of two number is %d",(*p) + (*q));
}
