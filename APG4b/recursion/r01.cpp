#include <bits/stdc++.h>
using namespace std;

// int sum(int n) {
//   int s = 0;
//   for (int i = 1; i <= n; i++) {
//     s += i;
//   }
//   return s;
// }

int sum(int n) {
  if (n == 0) return 0;
  return n + sum(n - 1);
}

int main() {
  for (int i = 0; i <= 10; i++) {
    cout << "Sum of 0 to " << i << ": " << sum(i) << endl;
  }
}
