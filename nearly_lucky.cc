// Problem 110A
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s;
  cin >> s;
  int count = 0;
  for (unsigned int i = 0; i < s.size(); ++i) {
    if (s[i] == '4' || s[i] == '7')
      ++count;
  }
  if (count == 7 || count == 4)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
