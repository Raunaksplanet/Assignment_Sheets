#include<iostream>
using namespace std;


class base
{

public:
    int number1;
    int number2;

    void setvalue(int a, int b)
    {
        number1 = a;
        number2 = b;
    }

};

class derived : public base
{

public:
    void sum()
    {
        cout << "Sum of two number is " << number1 + number2 << endl;
    }
    void multiply()
    {
        cout << "Multiplication of two number is " << number1 * number2 << endl; 
    }

};




int main()
{

    
    derived two;
    /*
    Here we are accessing a function setvalue() of
    base class with the help of class named derived because 
    of inheritance
    */ 
    two.setvalue(2,3);
    two.sum();
    two.multiply();
    
 
}
