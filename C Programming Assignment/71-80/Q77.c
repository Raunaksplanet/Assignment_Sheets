#include <stdio.h>

struct book
{

    int price;
    int ReciptNo;
};

int main()
{

    struct book sells[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for book no %d\n", i+1);
        printf("Enter book price: ");
        scanf("%d", &sells[i].price);

        printf("Enter book Recip No: ");
        scanf("%d", &sells[i].ReciptNo);
        printf("\n\n");
    }

    int total = sells[0].price + sells[1].price + sells[2].price;
    int discount;
    (total < 200) ? (discount = (5 * total) / 100) : (discount = (10 * total) / 100);

    printf("Your total price is %d\nYour total price after discount is %d", total, total - discount);
}
