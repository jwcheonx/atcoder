#include <bits/stdc++.h>
using namespace std;

int sum_range(int a, int b) {
  if (a == b) return a;
  return sum_range(a, b - 1) + b; // (sum of a to b) = (sum of a to (b - 1)) + b
}

// int sum_range(int a, int b) {
//   if (a == b) return a;
//   return a + sum_range(a + 1, b); // (sum of a to b) = a + (sum of (a + 1) to b)
// }

int main() {
  cout << sum_range(3, 7) << endl; // 3 + 4 + 5 + 6 + 7 = 25
  cout << sum_range(5, 8) << endl; // 5 + 6 + 7 + 8 = 26
}
