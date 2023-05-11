#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if(a % 2 == 0 && a % 5 == 0)
    {
        cout << "Yes number is even and divisble by 5";
    }
    else if (a % 2 != 0 && a % 7 == 0)
    {
        cout << "Yes number is odd and divisble by 7";
    }
}
