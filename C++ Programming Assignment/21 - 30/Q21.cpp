#include <iostream>
using namespace std;

int main()
{
    int i,n;

    cout << "Enter a limit: ";
    cin >> n;

    for(i = 1 ; i <= n ; i++)
    {
        cout << i << "*" << i << " = " << i*i << endl;
    }
}
