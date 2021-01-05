#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  constexpr float div = 1.08;

  int x = ceil(n / div);

  if (x < (n + 1) / div) {
    cout << x << endl;
  } else {
    cout << ":(" << endl;
  }
}