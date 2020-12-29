#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;

  int mn = 0;
  int sum = 0;

  rep(i, h) rep(j, w) {
    int cur;
    cin >> cur;

    if (i == 0 && j == 0) {
      mn = cur;
    } else {
      mn = min(mn, cur);
    }

    sum += cur;
  }

  cout << sum - mn * (h * w) << endl;
}