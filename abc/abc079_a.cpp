#include <bits/stdc++.h>
using namespace std;

int main() {
  string n; cin >> n;

  // if (n[0] == n[1] && n[1] == n[2]) {
  //   cout << "Yes";
  // } else if (n[1] == n[2] && n[2] == n[3]) {
  //   cout << "Yes";
  // } else {
  //   cout << "No";
  // }

  if (n[1] == n[2] &&
     (n[0] == n[1] || n[2] == n[3])) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  cout << endl;
}