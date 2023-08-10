#include <stdio.h>

int tables(int a)
{
    static int i=1;
    if(i<11)
    {
        printf("%d X %d = %d\n", a, i, a*i);
        i++;
    }
    tables(a); 
}

int main()
{
    int a;
    printf("Enter a numebr: ");
    scanf("%d",&a);

    tables(a);    

}
