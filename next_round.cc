// problem 158A
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n,k;
  int count = 0;
  vector<int> p;
  int x;
  int limit;
  cin >> n >> k;
  while (cin) {
    cin >> x;
    p.push_back(x);
  }
  limit = p[k-1];
  for (int i = 0; i < n; ++i) {
    if (p[i] >= limit && p[i] != 0)
      ++count;
  }
  cout << count << endl;
}
