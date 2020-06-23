#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int gi, gj; // goal

vector<int> dx = {0, 1, -1, 0};
vector<int> dy = {1, 0, 0, -1};

bool is_valid_move(vector<string> &board,
                   vector<vector<bool>> &checked, int ni, int nj) {
  int h = board.size();
  int w = board.front().size();
  if (ni <= -1 || ni >= h || nj <= -1 || nj >= w) return false;
  if (board.at(ni).at(nj) == '#') return false;
  if (checked.at(ni).at(nj)) return false;

  return true;
}

bool reachable(vector<string> &board, vector<vector<bool>> &checked,
               int i, int j) {
  if (i == gi && j == gj) return true;

  checked.at(i).at(j) = true;

  bool rslt = false;
  rep(k, 4) {
    int ni = i + dy.at(k);
    int nj = j + dx.at(k);

    if (is_valid_move(board, checked, ni, nj) &&
        reachable(board, checked, ni, nj)) {
      rslt = true;
    }
  }

  return rslt;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> board(h);
  vector<vector<bool>> checked(h, vector<bool>(w, false));

  rep(i, h) cin >> board.at(i);

  rep(i, h) rep(j, w) {
    if (board.at(i).at(j) == 'g') {
      gi = i; gj = j;
      break;
    }
  }

  rep(i, h) rep(j, w) {
    if (board.at(i).at(j) == 's') {
      cout << (reachable(board, checked, i, j) ? "Yes" : "No")
           << endl;
      return 0;
    }
  }
}