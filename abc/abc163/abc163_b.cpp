#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  int sum = 0;
  rep(i, m) {
    int a; cin >> a;
    sum += a;
  }

  cout << max(n - sum, -1) << endl;
}