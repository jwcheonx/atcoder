#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> ans(h, vector<char>(w));
  vector<bool> row(h), col(w);

  rep(i, h) rep(j, w) {
    cin >> ans.at(i).at(j);

    if (ans.at(i).at(j) == '#') {
      row.at(i) = true;
      col.at(j) = true;
    }
  }

  rep(i, h) {
    if (!row.at(i)) continue; // skip the current row

    rep(j, w) {
      if (!col.at(j)) continue; // skip the current square
      cout << ans.at(i).at(j);
    }

    cout << endl;
  }
}
