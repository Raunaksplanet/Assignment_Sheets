#include <stdio.h>
int main(){
    char c[20] = "dog",temp[20];
    int i, j, k;

    for(i=0;c[i]!='\0';i++)
    {
        for(j=i,k=0;c[j]!='\0';j++)
        {
            temp[k++] = c[j];
            temp[k] = '\0';
            printf("%s\t",temp);
        }
    }
}
