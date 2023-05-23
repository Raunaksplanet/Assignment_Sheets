#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {
        digit = number % 10; 
        sum += digit;      
        number /= 10;        
    }

    cout << "The sum of the digits is: " << sum << std::endl;
}
