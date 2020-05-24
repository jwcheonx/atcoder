#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // x = x + 1;
  x++;
  cout << x << endl;

  // x = x * (a + b);
  x *= a + b;
  cout << x << endl;

  // x = x * x;
  x *= x;
  cout << x << endl;

  // x = x - 1;
  x--;
  cout << x << endl;
}