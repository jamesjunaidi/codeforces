// problem 236A
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
  string s;
  set<char> st;
  cin >> s;
  for (int i = 0; i < s.size(); ++i) {
    st.insert(s[i]);
  }
  if (st.size() % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;
}
