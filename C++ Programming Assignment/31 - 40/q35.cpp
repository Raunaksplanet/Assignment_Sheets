#include <iostream>
using namespace std;

int main()
{

    string n = "", str1 = "";
    int i, j;

    cout << "Enter String: ";
    getline(cin, n);

    for (i = 0; i < n.length(); i++)
    {
        for (j = i, str1 = ""; j < n.length(); j++)
        {
            str1 = str1 + n[j];
            cout << str1 << " ";
        }
    }
}
