#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

// size_tでやるときに必要
#include <array>
#include <cstddef>

using namespace std;

int main() {
  // ベクターでやる
  vector<int> array = {3, 2, 5, 7, 1};
  // index作成
  vector<size_t> index(array.size());
  iota(index.begin(), index.end(), 0);
  // sort
  sort(index.begin(), index.end(), [&array](size_t i1, size_t i2) {
      return array[i1] < array[i2];
  });
  for (auto v : index) cout << v << " ";
  cout << endl;

  // std::size_tでやる
  std::array<size_t,10> a;
  for (size_t i = 0; i != a.size(); i++) {
    a[i] = i;
    cout << a[i] << " ";
  }
  cout << endl;
  for (size_t i = a.size()-1; i < a.size(); i--) cout << a[i] << " ";
  cout << endl;
}