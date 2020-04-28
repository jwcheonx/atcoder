#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());

  regex re("maerd|remaerd|esare|resare");
  s = regex_replace(s, re, "");

  cout << (s.empty() ? "YES" : "NO") << endl;
}
