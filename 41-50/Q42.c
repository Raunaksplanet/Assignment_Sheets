#include <stdio.h>
void main()
{
	int n = 10, arr[10], i, j, k;
	printf("Enter Array Elements --\n\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter Element [%d] -- ", i);
		scanf("%d", &arr[i]);
		for (j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
		system("cls");
		printf("Enter Array Elements --\n\n");
		for (k = 0; k <= i; k++)
		{
			printf("Enter Element [%d] -- %d\n", k, arr[k]);
		}
	}
	printf("\n\n Array Elements are -- \n\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n\n Prime Elements are -- \n\n");
	for (i = 0; i < n; i++)
	{
		for (j = 2, k = 0; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
				k++;
		}
		if (k == 1)
			printf("%d ", arr[i]);
	}
}
