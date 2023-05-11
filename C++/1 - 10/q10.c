#include <iostream>
using namespace std;

int main()
{
    char a;

    cout << "Enter a character: ";
    cin >> a;

    if ((a >= 'A' || a >= 'a') && (a <= 'Z' || a <= 'z'))
        cout << "Alphabet";
    else
        cout << "Not Alphabet";
}
