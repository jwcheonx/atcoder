#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;

  if (n >= 500) n = n % 500;
  if (n <= a) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  cout << endl;
}