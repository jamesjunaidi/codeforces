// Problem 231A
#include <iostream>

using namespace std;

int main(void) {
  int problems, count = 0;
  cin >> problems;
    for (int j = 0; j < problems; ++j) {
      int a,b,c;
      cin >> a >> b >> c;
      if (a+b+c >= 2) {
        ++count;
      }
    }
  cout << count << endl;

}
