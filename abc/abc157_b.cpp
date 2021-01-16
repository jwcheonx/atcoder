#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

/*
  T T T <- BINGO

  T T F
  T F T
  T F F
  F T T
  F T F
  F F T
  F F F
*/

bool bingo_row(vector<vector<bool>> &marked) {
  rep(i, 3) {

    rep(j, 3) {
      if (!marked.at(i).at(j)) break;
      if (j == 2) return true;
    }

    // cout << "no bingo in row " << i << endl;
  }

  return false;
}

bool bingo_col(vector<vector<bool>> &marked) {
  rep(j, 3) {

    rep(i, 3) {
      if (!marked.at(i).at(j)) break;
      if (i == 2) return true;
    }

    // cout << "no bingo in column " << j << endl;
  }

  return false;
}

bool bingo_diag(vector<vector<bool>> &marked) {
  // top-left to bottom-right
  for (int i = 0, j = 0; i <= 2 && j <= 2; i++, j++) {
    if (!marked.at(i).at(j)) break;
    if (i == 2 && j == 2) return true;
  }

  // bottom-left to top-right
  for (int i = 2, j = 0; i >= 0 && j <= 2; i--, j++) {
    if (!marked.at(i).at(j)) break;
    if (i == 0 && j == 2) return true;
  }

  return false;
}

int main() {
  vector<vector<int>> grid(3, vector<int>(3));
  vector<vector<bool>> marked(3, vector<bool>(3, false));

  rep(i, 3) rep(j, 3) {
    cin >> grid.at(i).at(j);
  }

  int n;
  cin >> n;

  rep(k, n) {
    int b;
    cin >> b;

    rep(i, 3) rep(j, 3) {
      if (grid.at(i).at(j) == b) {
        marked.at(i).at(j) = true;
      }
    }
  }

  if (bingo_row(marked) || bingo_col(marked)
                        || bingo_diag(marked)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
