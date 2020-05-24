#include <bits/stdc++.h>
using namespace std;

vector<int> reverse_array(vector<int> &v, int i) {
  if (i == v.size()) {
    return vector<int>();
  }

  vector<int> tmp = reverse_array(v, i + 1);
  tmp.push_back(v.at(i));
  return tmp;
}

int main() {
  vector<int> a = {1, 2, 3, 4, 5};
  vector<int> b = reverse_array(a, 0);
  for (int &n : b) {
    cout << n << endl;
  }
}
