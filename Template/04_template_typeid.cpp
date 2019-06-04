#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template<typename T> class MyClass {
  T data;
public:
  MyClass(T x) : data(x) {}
  void getdatatype();
};

template<typename T> void MyClass<T>::getdatatype() {
  cout << "現在の型" << typeid(T).name() << "で値は" << data << endl;
}

int main() {
  MyClass<int> mc1(1);
  MyClass<const char *> mc2("nekoでもわかる");
  MyClass<string> mc3("C++書け");

  mc1.getdatatype();
  mc2.getdatatype();
  mc3.getdatatype();

  return 0;
}