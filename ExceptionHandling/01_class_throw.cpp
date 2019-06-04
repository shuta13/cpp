#include <iostream>
using namespace std;

class MyError {
  double x;
public:
  void setx(double d) { x = d; }
  void Error() {
    cout << x << "is not within 10." << endl;
  }
};

int main() {
  char str[64];
  double d;

  try {
    MyError e;
    cout << "input within 10.";
    cin.getline(str, 64);
    d = atof(str);
    e.setx(d);
    if (d >= 10.0) throw (e);
    cout << "inputed number: " << d << endl;
  } catch(const MyError &ex) {
    ex.Error();
  }

  return 0;
}