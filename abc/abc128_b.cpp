#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<tuple<string, int, int>> v(n);

  rep(i, n) {
    string c;
    int s;
    cin >> c >> s;
    v.at(i) = make_tuple(c, -s, i + 1);
  }

  sort(v.begin(), v.end());

  for (auto &t : v) {
    cout << get<2>(t) << endl;
  }
}