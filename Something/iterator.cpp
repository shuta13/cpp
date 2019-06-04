#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;
#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main() {
  // マクロのアレ
  int sum,
      sum_vec;

  int ary[5] = {1,2,3,4,5};
  rep(i, ARRAY_LENGTH(ary)) {
    sum += ary[i];
  }
  cout << sum << endl;

  // ベクター, clang++ -std=c++11 -o hoge hoge.cpp でコンパイル
  vector<int> v;
  rep(i, 6) {
    v.push_back(i);
  }
  for (auto x: v) {
    sum_vec += x;
    cout << x << " ";
  }
  cout << endl;
  cout << sum << endl;

  return 0;
}