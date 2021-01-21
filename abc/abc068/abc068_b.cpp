#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int mx_cnt = 0;
  int ans = 1;

  for (int i = 1; i <= n; i++) {
    int cnt = 0;
    int tmp = i;

    while (tmp % 2 == 0) {
      tmp /= 2;
      cnt++;
    }

    if (cnt > mx_cnt) {
      mx_cnt = cnt;
      ans = i;
    }
  }

  cout << ans << endl;
}