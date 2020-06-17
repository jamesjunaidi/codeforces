// problem 546A
#include <iostream>

using namespace std;

int main(void) {
  int cost, money, num;
  cin >> cost >> money >> num;
  int total = 0;

  for (int i = 1; i <= num; i++) {
    total += (i*cost);
  }
  if (total - money > 0)
    cout << total - money << endl;
  else
    cout << 0 << endl;
}
