#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> scores(n);
  int sum = 0;
  rep(i, n) {
    cin >> scores.at(i);
    sum += scores.at(i);
  }

  int avg = sum / n;
  rep(i, n) {
    cout << abs(avg - scores.at(i)) << endl;
  }
}