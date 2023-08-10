#include <stdio.h>  
int main ()  
{  
    int arr[10];  
    int p = 0, i, n = 10;       
    printf ("\nEnter %d elements in array: \n", n);        
    for (i = 0; i < n; i++ )  
    {   printf ("arr[%d] = ", i);  
        scanf ("%d", &arr[i]);  
    }  
        for (i = p - 1; i < n -1; i++)  
        {  
            arr[i] = arr[i+1];
        }  
          
        printf ("\nArray after deletion \n");  
          
         
        for (i = 0; i< n - 1; i++)  
        {  
            printf ("arr[%d] = ", i);  
            printf ("%d \n", arr[i]);  
        }  
    }   
