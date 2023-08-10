#include <stdio.h>
void main()
{
	int arr[20];
	int n = 10, m1, m2, i;
	printf("Enter 10 numbers: \n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	m1 = m2 = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > m1)
		{
			m2 = m1;
			m1 = arr[i];
		}
		else if (arr[i] > m2 && arr[i] < m1)
			m2 = arr[i];
	}
	printf("First maxium number: %d\n", m1);
	printf("First maxium number: %d", m2);
}
