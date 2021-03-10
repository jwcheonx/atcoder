#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> v(n);

  rep(i, n) {
    int a;
    cin >> a;

    v.at(a - 1) = i + 1;
  }

  for (const int &i : v) {
    cout << i << " ";
  }
  cout << endl;
}