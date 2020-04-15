#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a.at(i);
  sort(a.begin(), a.end(), greater<int>());

  int ans = 0;
  rep(i, n) {
    if (i % 2) ans -= a.at(i);
    else ans += a.at(i);
  }

  cout << ans << endl;
}
