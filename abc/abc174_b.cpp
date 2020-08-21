#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

auto sq(int n) {
  return pow(n, 2);
}

int main() {
  int n, d;
  cin >> n >> d;

  int cnt = 0;
  rep(i, n) {
    int x, y;
    cin >> x >> y;

    if (sq(x) + sq(y) <= sq(d)) {
      cnt++;
    }
  }

  cout << cnt << endl;
}