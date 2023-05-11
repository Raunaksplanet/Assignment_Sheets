#include <iostream>
using namespace std;

int main()
{
    char a;
    
    cout << "Enter a character: ";
    cin >> a;

    if (a >= '0' && a <= '9')
        cout << "Number";
    else if ((a >= 'A' || a >= 'a') && (a <= 'Z' || a <= 'z'))
        cout << "Alphabet";
    else
        cout << "Symbol";
}
