#include <iostream>
using namespace std;

class boolean
{
private:
  bool a;

public:
  void setvalue(bool a1);
  void getvalue();
};

void boolean :: setvalue(bool a1)
{
  a = a1;
}

void boolean :: getvalue()
{
  if (a == 1)
    cout << "Value of A is True";
  else if (a == 0)
    cout << "Value of A is False";
  else
    cout << "Wrong Input";
}

int main()
{
  bool a;
  cout << "Enter a bool value : ";
  cin >> a;
  boolean b;
  b.setvalue(a);
  b.getvalue();
}
