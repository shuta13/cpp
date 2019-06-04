#include <iostream>
using namespace std;

int main() {
  cout << "必要な個数--> ";
  int n;
  cin >> n;

  int *p;
  p = new int[n];

  for (int i = 0; i < n; i++) {
    cout << i + 1 << "番目のデータ --- ";
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cout << i + 1 << "番目のデータ数は" << p[i] << endl;
  }

  delete [] p;
  return 0;
}

