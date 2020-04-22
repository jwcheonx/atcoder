#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<int> v(3);
  rep(i, 3) cin >> v.at(i);
  sort(v.begin(), v.end());
  cout << v.back() - v.front() << endl;
}