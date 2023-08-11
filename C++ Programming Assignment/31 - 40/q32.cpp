#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string str, str2;
    cout << "Enter a string: ";
    getline(cin, str);
    str2 = str;

    reverse(str2.begin(), str2.end());
    (str2 == str) ? cout << "Palindrome" : cout << "Not Palindrome";
}
