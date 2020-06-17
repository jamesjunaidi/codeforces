// Problem 977A
#include <iostream>

using namespace std;
int main(void) {
  int num, sub;
  cin >> num >> sub;
  for (int i = 0; i < sub; ++i) {
    if (num % 10 == 0)
      num /= 10;
    else
      --num;
  }
  cout << num << endl;
}
