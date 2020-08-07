#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> v(n);

  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v.at(i) = make_pair(b, a);
  }

  sort(v.begin(), v.end());

  for (auto &p : v) {
    cout << p.second << " " << p.first << endl;
  }
}