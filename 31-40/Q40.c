#include <stdio.h>  
int main ()  
{  
    int arr[10];  
    int p, i, n = 10;       
    printf ("\nEnter %d elements in array: \n", n);        
    for (i = 0; i < n; i++ )  
    {   printf ("arr[%d] = ", i);  
        scanf ("%d", &arr[i]);  
    }  
       
    printf("Enter position to delete element: ");  
    scanf ("%d", &p);  
        
    if (p >= n+1)  
    {  
        printf ("\nDeletion is not possible in the array.");  
    }  
    else  
    {  
        
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
}  
