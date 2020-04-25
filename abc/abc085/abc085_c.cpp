#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;

  for (int i = 0; i <= n; i++) {
    for (int j = 0, k = n - i - j; k >= 0; j++, k--) {
      if (10000 * i + 5000 * j + 1000 * k == y) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    cout << -1 << " ";
  }
  cout << endl;
}
