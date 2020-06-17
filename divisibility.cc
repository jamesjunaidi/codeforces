// problem 1328A
#include <iostream>

// This code is too slow.
using namespace std;

int main(void) {
  int cases;
  unsigned int first, second;
  unsigned int moves = 0;
  cin >> cases;
  for (unsigned int i = 0; i < cases; ++i) {
    cin >> first >> second;
    if (first % second == 0)
      moves = 0;
    else if (first < second)
      moves = second - first;
    else {
      unsigned int m = 1;
      while (m*second < first) {
        ++m;
      }
      moves = (m*second)-first;
    }
    cout << moves << endl;
    moves = 0;
  }
  

}
