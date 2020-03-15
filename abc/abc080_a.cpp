#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, p2;
  cin >> n >> a >> p2;
  int p1 = n * a;
  cout << (p1 < p2 ? p1 : p2) << endl;
}