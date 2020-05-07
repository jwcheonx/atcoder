#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, a, b;
  cin >> k >> a >> b;

  for (; a <= b; a++) {
    if (a % k == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }

  cout << "NG" << endl;
}
