#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> ans(h);
  rep(i, h) cin >> ans.at(i);

  vector<bool> row(h), col(w);
  rep(i, h) rep(j, w) {
    if (ans.at(i).at(j) == '#') {
      row.at(i) = true;
      col.at(j) = true;
    }
  }

  rep(i, h) {
    if (row.at(i)) {
      rep(j, w) {
        if (col.at(j)) {
          cout << ans.at(i).at(j);
        }
      }
    }
    cout << endl;
  }
}
