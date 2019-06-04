#include <iostream>
using namespace std;

class MyClass {
  private:
    int a;
  public:
    int b;
    int set_a();
    int show_a();
};

int MyClass::set_a() {
  cout << "a --> ";
  cin >> a;
  return 0;
}

int MyClass::show_a() {
  cout << a << endl;
  return 0;
}

int main() {
  MyClass mc;

  mc.b = 100;
  cout << "b=" << mc.b << endl;

  mc.set_a();

  mc.show_a();

  return 0;
}
