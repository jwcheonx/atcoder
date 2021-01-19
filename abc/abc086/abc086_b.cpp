#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int ab = stoi(a + b);

  float rt = sqrt(ab);

  if (floor(rt) == rt) {
    // rt is an integer
    cout << "Yes" << endl;
  } else {
    // rt has a non-zero fractional part
    cout << "No" << endl;
  }
}