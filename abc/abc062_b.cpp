#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;

  rep(i, w + 2) cout << '#';
  cout << endl;

  rep(i, h) rep(j, w) {
    char c;
    cin >> c;
    if (j == 0) cout << '#';
    cout << c;
    if (j == w - 1) cout << '#' << endl;
  }

  rep(i, w + 2) cout << '#';
  cout << endl;
}