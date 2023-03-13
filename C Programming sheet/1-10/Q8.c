#include <stdio.h>
int main()
{
   // bitwise operator to perform operation at bit level. \
   // bitwise operator are as follow: &, |, ^, ~, >>. 
   int a = 10,b = 25;

   printf("AND operation is: %d\n",a & b);
   printf("OR operation is: %d\n",a | b);
   printf("XOR operation is: %d\n",a ^ b);
   printf("COMPLIMENT operation is: %d\n",~b);
   printf("SHIFT RIGHT operation is: %d\n",a >> b);
}
