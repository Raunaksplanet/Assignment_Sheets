#include <iostream>
using namespace std;

int main()
{
    int arr[10], n = 10, i, j, tmp;

    cout << "Enter data: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   

    cout << "\n\nElements in array: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }


    for (i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    cout << "\n\nElements in array: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    
}
