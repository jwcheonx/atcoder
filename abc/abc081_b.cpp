#include <bits/stdc++.h>
using namespace std;

bool oddNumberFound = false;

int main() {
  int n; cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    v.push_back(a);
  }

  int cnt = 0;
  while (!oddNumberFound) {
    for (int i = 0; i < n; i++) {
      int a = v.at(i);

      if (a % 2 != 0) {
        oddNumberFound = true;
        break;
      }

      v.at(i) = a / 2;
    }

    if (!oddNumberFound) cnt++;
  }

  cout << cnt << endl;
}