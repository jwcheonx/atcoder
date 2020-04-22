#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> v(n, 0);
  rep(i, n - 1) {
    int a; cin >> a;
    v.at(a - 1)++;
  }

  for (int a : v) {
    cout << a << endl;
  }
}
