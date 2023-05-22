#include <stdio.h>

int max(int x, int y, int z)
{
    if (x > y)
        return x;
    else if (y > z)
        return y;
    else
        return z;
}

int main()
{

    int a, b, c;
    printf("Enter Three number: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Maxium number is %d",max(a,b,c));
}
