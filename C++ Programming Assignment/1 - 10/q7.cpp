#include <iostream>
using namespace std;

const double pi = 3.14;

int main()
{
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * radius * radius;

    cout << "The area of the circle is: " << area << endl;
}
