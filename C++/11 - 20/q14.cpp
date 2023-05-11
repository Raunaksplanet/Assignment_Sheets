#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    while(str[i] != '\0')
    {
        cout << "Ascaii value of " << str[i] << " is "<< int(str[i]) << endl;
        i++;
    }
}
