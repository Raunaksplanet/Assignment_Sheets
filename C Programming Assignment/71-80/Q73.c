#include <stdio.h>

struct book
{
    int price;
    char name[20];
    int page;
};

int main()
{
    
    struct book no1;
    
    printf("Enter book price: ");
    scanf("%d",&no1.price);

    printf("Enter book name: ");
    scanf("%s",&no1.name);

    printf("Enter book pages: ");
    scanf("%d",&no1.page);
    printf("\n\nBook details are:\n");
    printf("book price: %d\n", no1.price);
    printf("book name: %s\n",no1.name);
    printf("book pages: %d",no1.page);

}
