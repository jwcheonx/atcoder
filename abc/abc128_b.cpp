#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using t_sii = tuple<string, int, int>;

bool cmp(const t_sii &t1, const t_sii &t2) {
  if (get<0>(t1) != get<0>(t2)) {
    return get<0>(t1) < get<0>(t2);
  }
  return get<1>(t1) > get<1>(t2);
}

int main() {
  int n;
  cin >> n;

  vector<t_sii> v(n);

  rep(i, n) {
    string c;
    int s;
    cin >> c >> s;
    v.at(i) = make_tuple(c, s, i + 1);
  }

  sort(v.begin(), v.end(), cmp);

  for (auto &t : v) {
    cout << get<2>(t) << endl;
  }
}