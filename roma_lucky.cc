// Problem 262A

#include <iostream>
#include <string>

using namespace std;

bool checkString(string b, int k) {
  int count = 0;
  for (unsigned int i = 0; i < b.size(); ++i) {
    if (b[i] == '4' || b[i] == '7')
      ++count;
  }
  if (count > k)
    return false;
  else
    return true;
}


int main(void) {
  int n,k;
  int count = 0;
  cin >> n >> k;
  while (n--) {
    int a;
    cin >> a;
    string b;
    b = to_string(a);
    if(checkString(b, k))
      ++count;
  }
  cout << count << endl;
}
