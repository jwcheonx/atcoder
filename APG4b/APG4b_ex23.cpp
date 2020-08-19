#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using uli = uint32_t;

int main() {
  uli n;
  cin >> n;
  map<uli, uli> m;

  uli key = -1, max_val = 0;
  rep(i, n) {
    uli a;
    cin >> a;
    uli val = ++m[a];

    if (val > max_val) {
      key = a;
      max_val = val;
    }
  }

  cout << key << " " << max_val << endl;
}