#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  int mn, mx;
  vector<int> v(n);
  rep(i, n) {
    int x;
    cin >> x;

    if (i == 0) {
      mn = x;
      mx = x;
    } else {
      mn = min(mn, x);
      mx = max(mx, x);
    }

    v.at(i) = x;
  }

  int ans;
  for (int p = mn; p <= mx; p++) {
    int tmp = 0;
    for (int &x : v) {
      tmp += pow(x - p, 2);
    }

    if (p == mn) {
      ans = tmp;
    } else {
      ans = min(ans, tmp);
    }
    // cout << "p: " << p << ", ans: " << ans << endl;
  }

  cout << ans << endl;
}