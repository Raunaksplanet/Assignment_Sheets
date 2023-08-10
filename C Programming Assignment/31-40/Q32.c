Pattern 

     * 
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
     
#include <stdio.h>
void main()
{
	int i, j, k, c = 5, n = 5;
	for (i = 1; i <= n; i++)
	{
		printf("%*c", (n - i + 1), ' ');
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= n - 1; i++)
	{
		printf("%*c", (i + 1), ' ');
		for (j = 1; j <= n - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
