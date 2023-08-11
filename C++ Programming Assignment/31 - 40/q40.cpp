#include <iostream>
#include <algorithm>
using namespace std;

class sum
{
public:
    int arr[10], i, j, sum = 0, total = 0;

    void setvalue()
    {
        cout << "Enter data: ";
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 10);

        for (int i = 0; i < 5; i++)
        {
            total += arr[i];
        }
    }
    void gettotal()
    {
        cout << total;
    }
};

int main()
{
    sum s;
    s.setvalue();
    s.gettotal();
}
