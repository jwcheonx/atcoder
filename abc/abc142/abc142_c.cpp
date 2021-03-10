#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  map<int, int> mp;

  rep(i, n) {
    int a;
    cin >> a;

    mp[a] = i + 1; // keys are sorted in map
  }

  for (const auto &p : mp) {
    cout << p.second << " ";
  }
  cout << endl;
}