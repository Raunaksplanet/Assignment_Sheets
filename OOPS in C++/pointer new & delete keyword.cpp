#include<iostream>
using namespace std;

int main()
{
 
    // 1.creating a pointer varible and setting its value using new keyword.

    int *ptr = new int (40); 
    float *ptr2 = new float (12.21);

    cout <<  "The value of ptr1 is " << *(ptr) << endl;
    cout <<  "The address of ptr1 is " << &ptr << endl;
    cout <<  "The value of ptr2 is " << *(ptr2) << endl;
    cout <<  "The address of ptr2 is " << &ptr2 << endl;

    cout << "\n\n";

    // 2.Allocating block of memory(Array).
    int *arr = new int[3];
    arr[0] = 10; 
    arr[1] = 20;
    arr[2] = 30;
 
    cout << "value at arr[0] is " << arr[0] << endl;
    cout << "value at arr[1] is " << arr[1] << endl;
    cout << "value at arr[2] is " << arr[2] << endl;

    cout << "\n\n";

    // 3.Deallocating block of memory(Array).

    delete[] arr;
    // Now if we print array it will show trash value.
    cout << "value at arr[0] is " << arr[0] << endl;
    cout << "value at arr[1] is " << arr[1] << endl;
    cout << "value at arr[2] is " << arr[2] << endl;
}
