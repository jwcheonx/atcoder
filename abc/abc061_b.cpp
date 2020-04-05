#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(n, 0);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    v.at(a - 1)++;
    v.at(b - 1)++;
  }

  rep(i, n) {
    cout << v.at(i) << endl;
  }
}