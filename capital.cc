// problem 281A
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s;
  cin >> s;
  char a;
  a = s[0];
  a = toupper(a);
  s[0] = a;
  cout << s << endl;
}
