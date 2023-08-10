#include <iostream>
using namespace std;

class ascaii
{
public:
    int f;
    void convert(char i)
    {
        printf("ASCAII value of %c is %d\n", i, i);
    }
};

int main()
{
    ascaii a;
    char i, f;

    cout << "Enter a number: ";
    cin >> i;
    a.convert(i);

    cout << "To continue Press 1 else any key: ";
    cin >> f;

    if (f == '1')
        main();
    else
        exit;
}
