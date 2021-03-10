#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A, B, M;
  cin >> A >> B >> M;

  int min_a, min_b;
  vector<int> va(A), vb(B);

  rep(i, A) {
    int a;
    cin >> a;

    min_a = (i == 0) ? a : min(min_a, a);
    va.at(i) = a;
  }

  rep(i, B) {
    int b;
    cin >> b;

    min_b = (i == 0) ? b : min(min_b, b);
    vb.at(i) = b;
  }

  int ans = min_a + min_b;

  rep(i, M) {
    int x, y, c;
    cin >> x >> y >> c;

    int price = va.at(x - 1) + vb.at(y - 1) - c;
    ans = min(ans, price);
  }

  cout << ans << endl;
}