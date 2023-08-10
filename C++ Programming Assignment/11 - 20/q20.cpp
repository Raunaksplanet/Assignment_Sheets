#include<iostream>
using namespace std;

int main()
{
    int unit;
    int arr[4] = {50,100,200,250};
    double arr2[4] = {3.50,4.00,5.20,6.50}, amount= 0;

    cout << "Enter a Unit: ";
    cin >> unit; 

    cout << "\nBrakdown will be\n";
    for (int i = 0; i < 4; i++)
    {
        while(unit>=arr[i])
        {
            amount = amount + arr2[i];
            unit -= arr[i];
        } 
    }

    cout << amount;
}
