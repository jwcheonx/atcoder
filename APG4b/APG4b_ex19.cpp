#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void grade(vector<vector<int>> &v, int &x, int &y) {
  rep(i, 9) rep(j, 9) {
    int ans = (i + 1) * (j + 1);
    if (v.at(i).at(j) != ans) {
      y++;
      v.at(i).at(j) = ans;
    } else {
      x++;
    }
  }
}

int main() {
  vector<vector<int>> a(9, vector<int>(9));

  rep(i, 9) rep(j, 9) {
    cin >> a.at(i).at(j);
  }

  int correct = 0;
  int wrong = 0;

  grade(a, correct, wrong);

  rep(i, 9) rep(j, 9) {
    cout << a.at(i).at(j);
    if (j < 8) cout << " ";
    else cout << endl;
  }

  cout << correct << endl;
  cout << wrong << endl;
}
