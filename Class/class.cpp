#include <iostream>
using namespace std;

class BMI {
  private:
    double bw;
    double bl;
    double bmi;
  public:
    int setdata();
    int showbmi();
};

int BMI::showbmi() {
  cout << "BMI = " << bmi << endl;
  return 0;
}

int BMI::setdata() {
  cout << "身長(m) ---";
  cin >> bl;
  cout << "体重(kg) ---";
  cin >> bw;
  bmi = bw / (bl * bl);
  return 0;
}

int main() {
  BMI b;

  b.setdata();
  b.showbmi();
  return 0;
}

