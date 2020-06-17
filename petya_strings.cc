// 112A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void tolower(string &a) {
  for (auto &i : a) {
    i = tolower(i);
  }
}


int main(void) {
  string a, b;
  cin >> a >> b;
  tolower(a);
  tolower(b);
  if (a < b)
    cout << -1 << endl;
  else if (a > b)
    cout << 1 << endl;
  else
    cout << 0 << endl;
}
