#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;
vector<vector<bool>> visited;

// priority: lower > right > left > upper
vector<int> dx = {0, 1, -1, 0};
vector<int> dy = {1, 0, 0, -1};

void func(vector<string> &v, int i, int j) {
  if (i == n - 1 && j == n - 1) {
    cout << "Yes" << endl;
    return;
  }

  rep(k, 4) {
    int ni = i + dy.at(k);
    int nj = j + dx.at(k);

    if (ni < 0 || ni > n - 1 ||
        nj < 0 || nj > n - 1 ||
        v.at(ni).at(nj) == '#' ||
        visited.at(ni).at(nj)) {
      if (k == 3) { // all paths are blocked
        cout << "No" << endl;
        return;
      } else {
        continue;
      }
    }

    visited.at(i).at(j) = true;
    func(v, ni, nj);
    return;
  }
}

int main() {
  cin >> n;
  vector<string> v(n);
  rep(i, n) cin >> v.at(i);
  visited = vector<vector<bool>>(n, vector<bool>(n, false));

  func(v, 0, 0);
}