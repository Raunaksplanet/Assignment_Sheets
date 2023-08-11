#include <iostream>
using namespace std;

class student
{

public:
    int id, kils, marks[5], total, percentage;
    string name;

    void getdata()
    {
        cout << "Enter Student Details:\n";
        cout << "Enter Name: ";
        getline(cin,name);


        cout << "Enter id: ";   
        cin >> id;

        cout << "Enter Class: ";
        cin >> kils;

        cout << "Enter 5 Subject marks:\n";
        for(int i = 1; i<=5;i++)
        {
            cout << i << " Subject: ";
            cin >> marks[i];
            total += marks[i];
        }
        percentage = (total*500)/500;
    }
    void showdata()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Student Class: " << kils << endl;
        cout << "Student Total Marks: " << total << endl;
        cout << "Student Total Percentage: " << percentage << endl;
    }
};

int main()
{
    student d1;
    d1.getdata();
    d1.showdata();
}
