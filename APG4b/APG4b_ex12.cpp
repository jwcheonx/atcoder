#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 1;
  for (int i = 0; i < s.size(); i++) {
    switch (s.at(i)) {
      case '+': ans++; break;
      case '-': ans--; break;
      default: break;
    }
  }

  cout << ans << endl;
}