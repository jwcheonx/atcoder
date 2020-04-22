#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int sum(vector<int> v) {
  int sum = 0;
  for (int i : v) sum += i;
  return sum;
}

void output(int i1, int i2, int i3) {
  cout << i1 * i2 * i3 << endl;
  return;
}

vector<int> input(int n) {
  vector<int> v(n);
  rep(i, n) cin >> v.at(i);
  return v;
}

int main() {
  int n;
  cin >> n;

  vector<int> a = input(n);
  vector<int> b = input(n);
  vector<int> c = input(n);

  int sum_a = sum(a);
  int sum_b = sum(b);
  int sum_c = sum(c);

  output(sum_a, sum_b, sum_c);
}
