#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> v(h);
  rep(i, h) cin >> v.at(i);

  string s = string(w + 2, '#');
  cout << s << endl;

  rep(i, h) {
    cout << '#' << v.at(i) << '#' << endl;
  }

  cout << s << endl;
}