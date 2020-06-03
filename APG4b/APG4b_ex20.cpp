#include <bits/stdc++.h>
using namespace std;

int count_num_reports(vector<vector<int>> &v, int i) {
  if (v.at(i).empty()) {
    return 1;
  }

  int sum = 0;
  for (int c : v.at(i)) {
    sum += count_num_reports(v, c);
  }
  sum++;
  return sum;
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

  for (int i = 0; i < n; i++) {
    cout << count_num_reports(v, i) << endl;
  }
}
