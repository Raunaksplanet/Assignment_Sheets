#include <iostream>
using namespace std;

class first
{

private:
    int a, b;

public:
    int setdata(int a1, int b1);
    int getdata();
};

int first ::setdata(int a1, int b1)
{

    a = a1;
    b = b1;
}

int first ::getdata()
{
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "\n\n";
}

int main()
{

    first *c1 = new first;

    // (*c1).setdata(11,22);
    // (*c1).getdata();

    // using arrow operator to print value of pointer c1.
    c1->setdata(12, 34);
    c1->getdata();

    // Array of obejct using pointer
    int i,x,y;
    first *c2 = new first[3];
    first *c22 = c2;
    // using arrow operator to print value of pointer c1.
    for (i = 0; i < 3; i++)
    {
        cout << "Enter two number: ";
        cin >> x >> y; 
        c2 -> setdata(x, y);
        c2++;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "Data is " << endl; 
        c22 -> getdata();
        c22++;
    }
}
