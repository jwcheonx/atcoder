#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void mark(vector<string> &board, vector<vector<bool>> &marked,
          int i, int j) {
  // halt recursion if any of these conditions is met
  if (i <= -1 || i >= 10 || j <= -1 || j >= 10) return;
  if (board.at(i).at(j) == 'x') return;
  if (marked.at(i).at(j)) return;

  // mark itself
  marked.at(i).at(j) = true;
  // recursively mark squares nearby
  mark(board, marked, i + 1, j    ); // upper
  mark(board, marked, i - 1, j    ); // lower
  mark(board, marked, i    , j + 1); // right
  mark(board, marked, i    , j - 1); // left
}

bool is_connected(vector<string> &board) {
  vector<vector<bool>> marked(10, vector<bool>(10, false));

  // get position of a random 'land' square
  int y, x;
  rep(i, 10) rep(j, 10) {
    if (board.at(i).at(j) == 'o') {
      y = i; x = j;
      break;
    }
  }

  // mark every other 'land' square reachable from this one
  mark(board, marked, y, x);

  // if all 'land' squares were connected,
  // every one of them should have been marked
  bool rslt = true;
  rep(i, 10) rep(j, 10) {
    if (board.at(i).at(j) == 'o' && !marked.at(i).at(j)) {
      rslt = false;
    }
  }

  return rslt;
}

int main() {
  vector<string> board(10);
  rep(i, 10) cin >> board.at(i);

  rep(i, 10) rep(j, 10) {
    if (board.at(i).at(j) == 'x') {
      board.at(i).at(j) = 'o'; // fill here

      if (is_connected(board)) {
        cout << "YES" << endl;
        return 0;
      }

      board.at(i).at(j) = 'x'; // revert
    }
  }

  cout << "NO" << endl;
}
