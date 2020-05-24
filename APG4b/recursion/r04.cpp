#include <bits/stdc++.h>
using namespace std;

bool has_divisor(int n, int i) {
  if (i == n) return false;
  if (n % i == 0) return true;

  return has_divisor(n, i + 1);
}

bool is_prime(int n) {
  switch(n) {
    case 1:
      return false;
    case 2:
      return true;
    default:
      return !has_divisor(n, 2);
  }
}

int main() {
  cout << is_prime(1) << endl;  // 0
  cout << is_prime(2) << endl;  // 1
  cout << is_prime(12) << endl; // 0
  cout << is_prime(13) << endl; // 1
  cout << is_prime(57) << endl; // 0
}