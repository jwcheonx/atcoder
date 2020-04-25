#include<bits/stdc++.h>
using namespace std;

int sum_digits(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int s = sum_digits(i);
    if (s >= a && s <= b) ans += i;
  }

  cout << ans << endl;
}