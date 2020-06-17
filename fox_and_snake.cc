// 510A

#include <iostream>
#include <math.h>
using namespace std;

void snake(int m) {
  for (int i = 0; i < m; ++i) {
    cout << "#";
  }
  cout << endl;
}

int main(void) {
  int n, m;
  cin >> n >> m;
  int c = 2;
  
  for (int i = 0; i < n/2; ++i) {
    snake(m);
    if (c % 2 == 0) {
      for (int j = 0; j < m-1; ++j) {
        cout << ".";
      }
      cout << "#" << endl;
    } else {
        cout << "#";
        for (int k = 0; k < m-1; ++k) {
          cout << ".";
        }
        cout << endl;
    }
    ++c;
  }
  snake(m);
}
