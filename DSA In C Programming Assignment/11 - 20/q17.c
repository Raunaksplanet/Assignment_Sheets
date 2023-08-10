#include<stdio.h>
int main()
{
 
    char str[20],t1,t2,t3;
    int i,j;

    printf("Input string: ");
    scanf("%s",str);

    for(i=0;str[i] != '\0'; i++)
    {
        t1 = (str[i] >= 65 && str[i]<= 90)?str[i]:(str[i]-32);
        for(j=i+1;str[j] != '\0'; j++)
        {
           t2 = (str[j] >= 65 && str[j]<= 90)?str[j]:(str[j]-32); 
           if(t1>t2)
           {
            t3 = str[i];
            str[i] = str[j];
            str[j] = t3;
           }
        }
    }
        printf("%s",str);
}
// q17