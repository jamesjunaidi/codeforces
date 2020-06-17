// 59A
#include <iostream>
#include <algorithm>
#include <string>
#include <locale>

using namespace std;


int main(void) {
  string s;
  cin >> s;
  int count = 0;


  for (unsigned int i = 0; i < s.size(); ++i) {
    if (isupper(s[i]))
      ++count;
  }
  if (count > s.size()/2) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
  } else {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
  }
  cout << endl;
}
