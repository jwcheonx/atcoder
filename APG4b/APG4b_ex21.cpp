#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// O(1)
int func_0(int n) {
  return 1;
}

// O(n + m)
int func_1(int n, int m) {
  int s = 0;
  rep(i, n) s++;
  rep(i, m) s++;
  return s;
}

// O(n log n)
int func_2(int n) {
  int s = 0;

  rep(i, n) {
    int tmp = n;
    int cnt = 0;

    while (tmp > 0) {
      cnt++;
      tmp /= 2;
    }

    s += cnt;
  }

  return s;
}

// O(1)
int func_3(int n) {
  int s = 0;
  rep(i, 3) rep(j, 3) s++;
  return s;
}

// O(n^2)
int func_4(int n) {
  int s = 0;
  rep(i, n) rep(j, n) s += i + j;
  return s;
}

// O(n m)
int func_5(int n, int m) {
  int s = 0;
  rep(i, n) rep(j, m) s += i + j;
  return s;
}

int main() {
  // 0 <= n <= 10^6
  // 0 <= m <= 10^2
  int n, m;
  cin >> n >> m;

  cout << "func_0: " << func_0(n) << endl;
  cout << "func_1: " << func_1(n, m) << endl;
  cout << "func_2: " << func_2(n) << endl;
  cout << "func_3: " << func_3(n) << endl;
  // cout << "func_4: " << func_4(n) << endl;
  cout << "func_5: " << func_5(n, m) << endl;
}
