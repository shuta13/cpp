#include <iostream>
#include <string>
using namespace std;

class Meibo {
  string name;
  double bw;
  double bl;
public:
  static double bw_total;
  static double bl_total;
  void setdata();
};

double Meibo::bw_total = 0.0;
double Meibo::bl_total = 0.0;

void Meibo::setdata() {
  cout << "氏名：";
  cin >> name;
  cout << "体重：";
  cin >> bw;
  cout << "身長：";
  cin >> bl;

  bw_total += bw;
  bl_total += bl;
}

int main() {
  Meibo man[3];

  for (int i = 0; i < 3; i++) man[i].setdata();

  cout << "体重の合計は" << Meibo::bw_total << "です" << endl;
  cout << "身長の合計は" << Meibo::bl_total << "です" << endl;

  return 0;
}

