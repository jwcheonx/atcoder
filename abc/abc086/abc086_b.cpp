#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (b < 10) { // one-digit
    a *= 10;
  } else if (b < 100) { // two-digit
    a *= 100;
  } else { // 100
    a *= 1000;
  }

  float rt = sqrt(a + b);

  if (floor(rt) == rt) {
    // rt is an integer
    cout << "Yes" << endl;
  } else {
    // rt has a non-zero fractional part
    cout << "No" << endl;
  }
}