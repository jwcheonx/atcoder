#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, a;
  cin >> n >> a;

  rep(i, n) {
    char op; int b;
    cin >> op >> b;

    if (op == '/' && b == 0) {
      cout << "error" << endl;
      break; // Exit the loop
    }

    switch (op) {
      case '+': a += b; break;
      case '-': a -= b; break;
      case '*': a *= b; break;
      case '/': a /= b; break;
    }

    cout << i + 1 << ":" << a << endl;
  }
}