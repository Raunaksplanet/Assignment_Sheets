#include <iostream>
#include <strings.h>
using namespace std;

int main()
{

    string str, str2;
    cout << "Enter string: ";
    getline(cin,str);
    str2 = str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[i] != ' ')
            {
                str2[j] = '0';
            }
        }
    }

    cout << "\nBefore: " << str << endl;
    cout << "After: " << str2;
}
