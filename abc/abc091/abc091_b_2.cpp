#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  map<string, int> mp;

  cin >> n;
  rep(i, n) {
    string s; cin >> s;
    mp[s]++;
  }

  cin >> m;
  rep(i, m) {
    string t; cin >> t;
    mp[t]--;
  }

  int ans = 0;
  for (auto &p : mp) {
    ans = max(ans, p.second);
  }

  cout << ans << endl;
}
