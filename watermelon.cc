// problem 4A
#include <iostream>

using namespace std;

int main(void) {
  int w;
  cin >> w;
  if (w <= 2) {
    cout << "NO" << endl;
    return 0;
  }
  if (w % 2 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
