#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  regex re("(dream(er)?|erase(r)?)*");
  cout << (regex_match(s, re) ? "YES" : "NO") << endl;
}
