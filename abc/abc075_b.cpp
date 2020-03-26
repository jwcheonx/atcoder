#include <bits/stdc++.h>
using namespace std;

bool containsBomb(char c) {
  return c == '#';
}

int main() {
  int h, w; // height and width
  cin >> h >> w;

  vector<string> v;
  for (int i = 0; i < h; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  for (int i = 0; i < h; i++) {
    string s = v[i];

    for (int j = 0; j < w; j++) {
      if (containsBomb(s[j])) continue; // the bombs don't need any change

      int cnt = 0;
      bool hasLeft = j > 0;
      bool hasRight = j < w - 1;
      bool hasUpper = i > 0;
      bool hasLower = i < h - 1;

      // increment the count for every adjacent square
      // that contains a bomb
      if (hasLeft && containsBomb(s[j - 1])) cnt++; // left
      if (hasRight && containsBomb(s[j + 1])) cnt++; // right

      if (hasUpper) {
        string s_upper = v[i - 1];
        if (containsBomb(s_upper[j])) cnt++; // upper
        if (hasLeft && containsBomb(s_upper[j - 1])) cnt++; // upper left
        if (hasRight && containsBomb(s_upper[j + 1])) cnt++; // upper right
      }

      if (hasLower) {
        string s_lower = v[i + 1];
        if (containsBomb(s_lower[j])) cnt++; // lower
        if (hasLeft && containsBomb(s_lower[j - 1])) cnt++; // lower left
        if (hasRight && containsBomb(s_lower[j + 1])) cnt++; // lower right
      }

      // fill the current square with the count
      v[i][j] = '0' + cnt;
    }
  }

  for (string s : v) {
    cout << s << endl;
  }
}