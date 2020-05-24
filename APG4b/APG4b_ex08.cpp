#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, price, num;
  cin >> p;

  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }

  cin >> price >> num;
  cout << price * num << endl;
}
