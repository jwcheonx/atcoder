#include <bits/stdc++.h>
using namespace std;

void pass(int &seats) {
  seats--;
  cout << "Yes" << endl;
}

void fail() {
  cout << "No" << endl;
}

int main() {
  int n, a, b;
  string s;
  cin >> n >> a >> b >> s;

  int seats = a + b;
  int b_rank = 1;

  for (char &p : s) {
    if (p == 'c' || seats <= 0) {
      fail();
      continue;
    }

    switch (p) {
      case 'a': {
        pass(seats);
        break;
      }
      case 'b': {
        if (b_rank <= b) {
          pass(seats);
          b_rank++;
        } else {
          fail();
        }
        break;
      }
    }
  }
}