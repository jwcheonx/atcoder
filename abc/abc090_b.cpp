#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
  int s = n, r = 0;
  while (s > 0) {
    r = r * 10 + s % 10;
    s /= 10;
  }
  return n == r;
}

int main() {
  int a, b, cnt;
  cin >> a >> b;

  while (a <= b) {
    if (isPalindrome(a)) cnt++;
    a++;
  }

  cout << cnt << endl;
}