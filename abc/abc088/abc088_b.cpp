#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v.at(i);

  int a = 0, b = 0;
  rep(i, n) {
    auto it = max_element(v.begin(), v.end());

    if (i % 2 == 0) a += *it;
    else b += *it;

    v.erase(it);
  }

  cout << a - b << endl;
}