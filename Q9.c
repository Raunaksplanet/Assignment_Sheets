#include<stdio.h>
int main() {
    int n;
    float f;
    double d;
    char c;
    long double ld;
    long int li;

   // size of operator is use to find how many bytes a data type take in memory.
    printf("Size of int: %zu bytes\n", sizeof(n));
    printf("\nSize of float: %zu bytes\n", sizeof(f));
    printf("\nSize of double: %zu bytes\n", sizeof(d));
    printf("\nSize of char: %zu byte\n", sizeof(c));
    printf("\nSize of long double: %zu byte\n", sizeof(ld));
    printf("\nSize of long int: %zu byte\n", sizeof(li));
}
