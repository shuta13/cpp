#include <iostream>
using namespace std;

template<typename T> void comp (T a, T b) {
  if (a > b) {
    cout << a << ">" << b << endl;
  } else if (a < b) {
    cout << a << "<" << b << endl;
  } else {
    cout << a << "=" << b << endl;
  }
}

int main() {
  comp(2, 3);
  comp(2.5, 0.5);
  comp('a', 'a');
  comp('s', 'S');

  return 0;
}