#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s.at(i);
  sort(s.begin(), s.end());

  int m; cin >> m;
  vector<string> t(m);
  rep(i, m) cin >> t.at(i);

  int ans = 0;
  string checked = "";
  rep(i, n) {
    string cur = s.at(i);
    if (cur == checked) continue;

    int earn = count(s.begin(), s.end(), cur);
    int lose = count(t.begin(), t.end(), cur);
    ans = max(ans, earn - lose);

    checked = cur;
  }

  cout << ans << endl;
}
