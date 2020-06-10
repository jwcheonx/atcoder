#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;
vector<vector<bool>> visited;

// priority: lower > right > left > upper
vector<int> dx = {0, 1, -1, 0};
vector<int> dy = {1, 0, 0, -1};

bool is_valid_move(vector<string> &v, int ni, int nj) {
  if (ni <= -1 || ni >= n || nj <= -1 || nj >= n) return false;
  if (v.at(ni).at(nj) == '#') return false;
  if (visited.at(ni).at(nj)) return false;

  return true;
}

void func(vector<string> &v, int i, int j) {
  if (i == n - 1 && j == n - 1) {
    cout << "Yes" << endl;
    return;
  }

  rep(k, 4) {
    int ni = i + dy.at(k);
    int nj = j + dx.at(k);

    if (is_valid_move(v, ni, nj)) {
      visited.at(i).at(j) = true;
      func(v, ni, nj);
      return;
    }
    else if (k == 3) { // all paths are blocked
      cout << "No" << endl;
      return;
    }
  }
}

int main() {
  cin >> n;
  vector<string> v(n);
  rep(i, n) cin >> v.at(i);
  visited = vector<vector<bool>>(n, vector<bool>(n, false));

  func(v, 0, 0);
}