#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n,tmp,c=0;
    double arm;

    cout << "Enter a number: ";
    cin >> n;

    tmp = n;
    while(n>0)
    {
        c++;
        n /= 10;
    }
    
    n = tmp;
    arm = 0;

    while(n>0)
    {
        arm = arm + pow(n % 10,c);
        n /= 10;
    }
    (arm == tmp)?cout << "Armstrong":cout << "Not Armstrong";
}
