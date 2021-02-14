#include <bits/stdc++.h>
using namespace std;

bool has_divisor(int n, int i) {
  if (i == n) return false;
  if (n % i == 0) return true;

  return has_divisor(n, i + 1);
}

bool is_prime(int n) {
  if (n == 2) {
    return true;
  } else {
    return !has_divisor(n, 2);
  }
}

int main() {
  int x;
  cin >> x;

  const int ub = x * 2; // according to Chebyshev's theorem

  while (x < ub) {
    if (is_prime(x)) break;
    x++;
  }

  cout << x << endl;
}