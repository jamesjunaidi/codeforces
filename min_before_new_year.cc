// Problem 1283A
//
#include <iostream>

using namespace std;

int main(void) {
  int cases;
  cin >> cases;
  while (cases--) {
    int a,b;
    int time = 0;
    cin >> a >> b;
    while (a != 23) {
      time += 60;
      ++a;
    }
    time += 60 - b;
    cout << time << endl;
  }
}
