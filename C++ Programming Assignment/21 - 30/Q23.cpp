#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int n = 10, m1, m2, i;
    
    cout << "Enter Data: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

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
    cout << "First maximum" << m1 << endl;
    cout << "Second maximum" << m2 << endl;
}
