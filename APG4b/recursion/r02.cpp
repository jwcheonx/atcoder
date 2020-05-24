#include <bits/stdc++.h>
using namespace std;

int sum_range(int a, int b) {
  if (a == b) return a;
  return b + sum_range(a, b - 1);
}

int main() {
  cout << sum_range(3, 7) << endl; // 3 + 4 + 5 + 6 + 7 = 25
}
