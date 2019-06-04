#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  vector<int>::iterator pv;

  for (int i = 0; i < 10; i++) {
    v.push_back(20 - i);
  }

  pv = v.begin();
  while (pv != v.end()) {
    cout << *pv << ", ";
    ++pv;
  }
  cout << endl;
  return 0;
}