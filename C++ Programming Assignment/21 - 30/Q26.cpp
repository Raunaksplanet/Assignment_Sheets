#include <iostream>
using namespace std;

int main()
{
    int n = 10, arr[10], i, j, k;
	
    cout << "Enter data: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		for (j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
		system("cls");
		cout << "Enter data: ";
		for (k = 0; k <= i; k++)
		{
			cout << arr[k] << "  ";
		}
	}

	cout << "\n\nArray elements are: \n";
	for (i = 0; i < n; i++)
    {
		cout << arr[i] << "  ";
    }
}
