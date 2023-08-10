#include<stdio.h>

int main(){
	
	int arr[10],a = 0,i;
	printf("Enter  10 element: "); 

	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		a = a + arr[i];
	}

	printf("The sum of 10 element is %d",a);
}
