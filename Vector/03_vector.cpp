#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> v(4);
  vector<char>::iterator pv;

  pv = v.begin();
  *pv = 'x';
  ++pv;
  *pv = 'y';  
  ++pv;  
  *pv = 'z';
  ++pv;  
  *pv = 'a';

  // 根性で出力
  for (vector<char>::size_type i = 0; i < v.size(); i++) {
    cout << v[i] << ",";
  }
  cout << endl;

  for (pv = v.begin(); pv != v.end(); ++pv) {
    cout << *pv << ",";
  }
  cout << endl;

  return 0;
}