#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1, str2;
  const string str3(" Wow!");
  
  str1 = "Even cats can understand!";
  
  cout << "適当な文字列を入力してね:";
  cin >> str2;

  str1 += str3;
  str2 = "入力文字列---" + str2;

  cout << "str1:" << str1 << endl;
  cout << "str2:" << str2 << endl;

  cout << "str1のサイズ" << str1.length() << endl;

  cout << "str[1]:" << str1[1] << endl;

  size_t index = str1.find("cat");

  if (index != string::npos) cout << "部分文字列:" << str1.substr(index, 3) << endl;

  if (str3 == " Wow!") cout << "比較:str3は\" Wow!\"と等しい" << endl;

  if (str3 != " Cat!") cout << "比較:str3は\" Cat!\"と等しくない" << endl;

  return 0;
}
