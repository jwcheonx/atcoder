#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> board(h);
  rep(i, h) cin >> board[i];

  vector<int> dx = {-1, 0, 1, -1, 1, -1, 0, 1};
  vector<int> dy = {-1, -1, -1, 0, 0, 1, 1, 1};

  rep(i, h) rep(j, w) {
    if (board[i][j] == '#') continue;

    int num = 0;
    rep(k, 8) {
      int ni = i + dy[k];
      int nj = j + dx[k];

      if (ni < 0 || ni > h - 1) continue;
      if (nj < 0 || nj > w - 1) continue;

      if (board[ni][nj] == '#') num++;
    }

    board[i][j] = char('0' + num);
  }

  rep(i, h) {
    cout << board[i] << endl;
  }
}
