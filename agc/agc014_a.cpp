#include <bits/stdc++.h>
using namespace std;

bool is_even(int x) {
  return x % 2 == 0;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int cnt = 0;

  while (is_even(a) && is_even(b) && is_even(c)) {

    if (a == b && b == c) {
      cout << -1 << endl;
      return 0;
    }

    int sum = a + b + c;

    a = (sum - a) / 2;
    b = (sum - b) / 2;
    c = (sum - c) / 2;

    cnt++;
  }

  cout << cnt << endl;
}