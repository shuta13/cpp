#include <iostream>
using namespace std;

class MyClass {
  int x;
  int *px;
public:
  MyClass(int m);
  MyClass(const MyClass &otherobj);
  void setvalue(int n) { x = n; }
  void show_px() { cout << *px << endl; }
};

MyClass::MyClass(int m)
  : x(m),
    px(&x)
{
}

MyClass::MyClass(const MyClass &otherobj)
  : x(otherobj.x),
    px(&x)
{
}

int main() {
  MyClass a(10);
  MyClass b = a;

  a.show_px();
  b.show_px();

  b.setvalue(200);

  a.show_px();

  b.show_px();

  return 0;
}
