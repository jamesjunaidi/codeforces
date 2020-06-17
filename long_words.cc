// problem 71A
#include <iostream>

using namespace std;

int main() {
  int size;
  cin >> size;
  for (int i = 0; i < size; ++i) {
    string s;
    cin >> s;
    if (s.size() < 11) {
      cout << s << endl;
    } else {
      cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
    }
  }
}
