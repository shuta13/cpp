#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;
  int age;
  char sex;
public:
  Person(const string &, int, char);
  int show();
};

Person::Person(const string &nm, int n, char s)
  : name(nm), age(n), sex(s) {}

int Person::show() {
  cout << "氏名: " << name << endl;
  cout << "年齢: " << age << endl;
  cout << "性別: " << sex << endl;
  return 0;
}

int main() {
  Person hoge("ほげ", 26, 'M');
  Person foo("ふー", 25, 'F');

  cout << "----" << endl;
  hoge.show();
  cout << "----" << endl;
  foo.show();
  cout << "----" << endl;
  return 0;
}
   
