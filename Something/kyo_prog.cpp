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

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)

int main() {
  int a[10] = {1,2,3,4,5,6,7,8,9,0};
  // 配列長とれる
  cout << ARRAY_LENGTH(a) << endl;
  // こっちが(手間的に)はやそう
  vector<int> vec{ 1, 2, 3, 4, 5 };
  cout << vec.size() << endl;
  // rep
  int sum = 0;
  int array_num[10] = {1,2,3,4,5,6,7,8,9};
  rep(i, 10) {
    sum += array_num[i];
  }
  cout << sum << endl;
  return 0;
}                