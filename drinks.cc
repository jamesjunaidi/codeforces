// Problem 200B
//
#include <iostream>
using namespace std;

int main(void) {
  int num;
  cin >> num;
  double tot = num;
  double frac = 0, cur;
  while (num--) {
    cin >> cur;
    frac += (cur / (double)100);
  }
  cout << (double)100 * (frac/tot) << endl;
}
