#include <iostream>
using namespace std;

int main()
{
    int arr[12], n = 10, i, j, pos, data;
    cout << "Enter data: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   

    cout << "Elements in array: \n";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "\nEnter position: "; cin >> pos;
    cout << "Enter data: "; cin >> data;

    for (i = n; i > pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = data;
    n++;

    cout << "Elements in array after insertion: " << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
