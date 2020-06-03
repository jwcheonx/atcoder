#include <bits/stdc++.h>
using namespace std;

int time_required(vector<vector<int>> &v, int i) {
  if (v.at(i).empty()) {
    return 0;
  }

  int t = 0;
  for (int c : v.at(i)) {
    t = max(t, time_required(v, c) + 1);
  }
  return t;
}

int main() {
  int n;
  cin >> n;

  vector<vector<int>> v(n);
  for (int i = 1; i < n; i++) {
    int p;
    cin >> p;
    v.at(p).push_back(i);
  }

  cout << time_required(v, 0) << endl;
}
