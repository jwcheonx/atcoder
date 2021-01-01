#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  rep(i, n) cin >> v.at(i);

  int ans = 1e9; // big enough integer
  for (int p = 1; p <= 100; p++) {
    int sum = 0;
    for (int &x : v) {
      sum += pow(x - p, 2);
    }
    ans = min(ans, sum);
  }

  cout << ans << endl;
}