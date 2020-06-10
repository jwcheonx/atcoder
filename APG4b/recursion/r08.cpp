#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;
vector<vector<bool>> visited;

// priority: lower > right > left > upper
vector<int> dx = {0, 1, -1, 0};
vector<int> dy = {1, 0, 0, -1};

bool is_valid_move(vector<string> &board, int ni, int nj) {
  if (ni <= -1 || ni >= n || nj <= -1 || nj >= n) return false;
  if (board.at(ni).at(nj) == '#') return false;
  if (visited.at(ni).at(nj)) return false;

  return true;
}

bool reachable(vector<string> &board, int i, int j) {
  if (i == n - 1 && j == n - 1) return true;

  visited.at(i).at(j) = true;
  bool rslt = false;
  rep(k, 4) {
    int ni = i + dy.at(k);
    int nj = j + dx.at(k);

    if (is_valid_move(board, ni, nj) && reachable(board, ni, nj)) {
      rslt = true;
    }
  }

  return rslt;
}

int main() {
  cin >> n;
  vector<string> board(n);
  rep(i, n) cin >> board.at(i);
  visited = vector<vector<bool>>(n, vector<bool>(n, false));

  cout << (reachable(board, 0, 0) ? "Yes" : "No") << endl;
}