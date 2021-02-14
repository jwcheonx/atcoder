#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m, x;
  cin >> n >> m >> x;

  int l = 0;
  int r = 0;

  rep(i, m) {
    int a;
    cin >> a;

    if (a < x) l++;
    else r++;
  }

  cout << min(l, r) << endl;
}