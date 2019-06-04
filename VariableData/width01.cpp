#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 150; i++) {
    // 表示したい桁数
    cout.width(5);
    // *でうめる
    cout.fill('*');
    cout << i << endl;
  }
  return 0;
}
