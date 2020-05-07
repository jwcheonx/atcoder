#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> ans(n, vector<char>(n, '-'));

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    ans.at(a).at(b) = 'o';
    ans.at(b).at(a) = 'x';
  }

  rep(i, n) rep(j, n) {
    cout << ans.at(i).at(j);
    if (j == n - 1) cout << endl;
    else cout << " ";
  }
}
