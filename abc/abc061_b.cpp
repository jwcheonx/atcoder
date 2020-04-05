#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    v.push_back(a);
    v.push_back(b);
  }

  for (int i = 1; i < n + 1; i++) { // from 1 to n
    cout << count(v.begin(), v.end(), i) << endl;
  }
}