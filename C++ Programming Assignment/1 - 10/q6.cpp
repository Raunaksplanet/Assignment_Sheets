#include<iostream>
using namespace std;

int main()
{
 
    int  a;
    cout << "Enter a number: ";
    cin >> a;
    int &b = a;

    cout << "Value of Reference Varible is " << b;

}
