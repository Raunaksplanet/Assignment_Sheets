#include <stdio.h>
void main()
{
	int n, arr[10], i, j, m;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 0; n > 0; i++)
	{
		m = n % 2;
		arr[i] = m;
		n = n / 2;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", arr[j]);
}
