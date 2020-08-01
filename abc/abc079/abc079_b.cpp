#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }

  uint64_t a = 2, b = 1;
  rep(i, n - 2) {
    uint64_t s = a + b;
    a = b;
    b = s;
  }

  cout << a + b << endl;
}
