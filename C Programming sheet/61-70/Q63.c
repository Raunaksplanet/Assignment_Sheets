#include <stdio.h>
int Sum(int a,int b)
{
    int s = a + b;
    printf("Sum of A and B is %d",s);
}
int main()
{
    int a,b,c;

    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    printf("\nA = %d\n",a);
    printf("B = %d\n",b);
    c = Sum(a,b);
}

