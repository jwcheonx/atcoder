#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, price, num; string text;
  cin >> p;

  switch (p) {
    // Pattern 1
    case 1: cin >> price; break;
    // Pattern 2
    case 2: cin >> text >> price; break;
  }

  cin >> num;

  if (p == 2) cout << text << "!" << endl;
  cout << num * price << endl;
}
