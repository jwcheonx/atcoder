#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int sockets = 1;
  int strips = 0;
  a--;

  while (sockets < b) {
    sockets += a;
    strips++;
  }

  cout << strips << endl;
}