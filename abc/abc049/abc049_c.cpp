#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  // By reversing the entire string,
  // substitution can be done successfully.
  // e.g.: dreameraser -> dream/eraser or dreamer/aser
  //       resaremaerd -> resare/maerd
  reverse(s.begin(), s.end());
  s = regex_replace(s, regex("(re)?maerd|(r)?esare"), "");

  cout << (s.empty() ? "YES" : "NO") << endl;
}
