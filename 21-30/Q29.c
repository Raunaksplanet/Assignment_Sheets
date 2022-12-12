#include <stdio.h>
void main()
{
	int limit, j, p, i, n, temp, count = 0, arm = 0;
	printf("Enter a number limit:");
	scanf("%d", &limit);
	for (j=1; j<=limit; j++)
	{
		temp=n=j;
		for (count=0;n>0; (count++), (n = n / 10))
			;
		n = temp;
		for (arm=0;n>0;(n = n / 10))
		{
			for (p=1,i=1;i<=count; i++)
				p = p * (n % 10);
			arm = arm + p;
		}
		if (arm == temp)
			printf("%d\t", temp);
	}
}
