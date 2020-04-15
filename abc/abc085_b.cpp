#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v.at(i);
  sort(v.begin(), v.end());

  int ans = 1;
  rep(i, n) {
    if (i < n - 1 && v.at(i) < v.at(i + 1)) {
      ans++;
    }
  }

  cout << ans << endl;
}