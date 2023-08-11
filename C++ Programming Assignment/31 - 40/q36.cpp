#include <iostream>
using namespace std;

int main()
{

    string str = "", str1 = "", str2 = "";
    
    cout << "Enter string: ";
    getline(cin,str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str2 = str2 + str[i];

            if (i == str.length() - 1)
            {
                str1=" "+str1;
                str1 = str2 + str1;
            }
        }
        else
        {
            str1 = str2 + str1;
            str1 = str1 + "";
            str2 = "";
        }
    }
    cout << str1;
}
