#include <iostream>
using namespace std;
int n;

int fib(int n);
int main() {
  cout << "数字を入力してね:";
  cin >> n;
  cout << fib(n) << endl;
}

int fib(int n) {
  if (n == 1 || n == 2) {
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}
