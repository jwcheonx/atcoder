#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int ans = -1;
  for (int i = 0; i + t.size() <= s.size(); i++) {
    string tmp = s.substr(i, t.size());

    int cnt = 0;
    for (int j = 0; j < t.size(); j++) {
      if (tmp.at(j) != t.at(j)) cnt++;
    }

    if (ans == -1) ans = cnt;
    else ans = min(ans, cnt);
  }

  cout << ans << endl;
}
