#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q, sum;
  cin >> n;
  q = n;

  while (q) {
    sum += q % 10;
    q /= 10;
  }

  cout << (n % sum == 0 ? "Yes" : "No") << endl;
}