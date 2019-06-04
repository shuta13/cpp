#include <iostream>
using namespace std;

class MyClass {
  int x;
  int y;
public:
  MyClass(int m, int n);
  MyClass(const MyClass &otherobj);
  int show();
};

MyClass::MyClass(int m, int n)
  : x(m), y(n) {}

MyClass::MyClass(const MyClass &otherobj)
  : x(otherobj.x), y(0) {}

int MyClass::show() {
  cout << "x = " << x << ", ";
  cout << "y = " << y << endl;
  return 0;
}

int main() {
  MyClass a(10, 100);
  MyClass b = a;

  a.show();
  b.show();

  return 0;
}

