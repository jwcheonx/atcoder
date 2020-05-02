#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, sum;
  cin >> n >> sum;

  vector<int> a(n), p(n); // apples, pineapples
  rep(i, n) cin >> a.at(i);
  rep(i, n) cin >> p.at(i);

  int cnt = 0;
  for (int x : a) {
    for (int y : p) {
      if (x + y == sum) cnt++;
    }
  }

  cout << cnt << endl;
}
