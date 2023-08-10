#include <iostream>
using namespace std;

class swaping
{

private:
  int a, b;

public:
  void setValue(int a1, int b1);
  void swapingvalue();
  void displayValue();

};

void swaping ::setValue(int a1, int b1)
{
  a = a1, b = b1;
}

void swaping ::swapingvalue()
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}

void swaping ::displayValue()
{
  cout << "A = " << a << " B = " << b << endl;
}

int main()
{
  swaping b;
  int a,c;
  cout << "Enter 1st value: ";
  cin >> a;

  cout << "Enter 2nd value: ";
  cin >> c;

  cout << "Before swap\nA = " << a << " B = " << c << endl;
  b.setValue(a,c);
  b.swapingvalue();
  b.displayValue();



}
