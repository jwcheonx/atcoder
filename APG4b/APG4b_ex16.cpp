#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<int> data(5);
  rep(i, 5) cin >> data.at(i);

  rep(i, 4) {
    if (data.at(i) == data.at(i + 1)) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
}