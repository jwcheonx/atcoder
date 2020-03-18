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

  if (n % sum == 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  cout << endl;
}