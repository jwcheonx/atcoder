#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, sum;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    sum += min(x, k - x) * 2;
  }

  cout << sum << endl;
}