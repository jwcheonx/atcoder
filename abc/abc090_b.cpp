#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, ans;
  cin >> a >> b;

  while (a <= b) {
    string str = to_string(a);
    if (str[0] == str[4] && str[1] == str[3]) {
      ans++;
    }
    a++;
  }

  cout << ans << endl;
}