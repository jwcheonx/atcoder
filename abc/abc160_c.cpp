#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int k, n, first;
  cin >> k >> n >> first;

  int pre = first;
  int max_d = 1;

  rep(i, n - 1) {
    int cur;
    cin >> cur;
    max_d = max(max_d, cur - pre);
    pre = cur;
  }

  max_d = max(max_d, first + k - pre);

  cout << k - max_d << endl;
}