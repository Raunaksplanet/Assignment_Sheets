#include<iostream>
using namespace std;


class first
{

private:
    int a , b;
public:
    int setdata(int a1,int b1);
    int getdata();

};

int first :: setdata(int a1,int b1)
{

    a = a1;
    b = b1;

}

int first :: getdata()
{
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

}


int main()
{
 
    first *c1 = new first;

    // (*c1).setdata(11,22);
    // (*c1).getdata();

    // using arrow operator to print value of pointer c1.
    c1 -> setdata(12,34);
    c1 -> getdata();

}
