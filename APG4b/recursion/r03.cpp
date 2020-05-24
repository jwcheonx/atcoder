#include <bits/stdc++.h>
using namespace std;

// int array_sum(vector<int> v) {
//   int s = 0;
//   for (int &n : v) {
//     s += n;
//   }
//   return s;
// }

int array_sum(vector<int> &v, int i) {
  if (i == v.size()) return 0;
  return v.at(i) + array_sum(v, i + 1);
}

int main() {
  vector<int> a = {0, 3, 9, 1, 5};
  cout << array_sum(a, 0) << endl; // 0 + 3 + 9 + 1 + 5 = 18
}
