#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B >> S;

  int a = 0, b = 0;
  for (char &p : S) {
    if (p == 'a') {
      if (a + b < A + B) {
        printf("Yes\n");
        a++;
      } else {
        printf("No\n");
      }
    } else if (p == 'b') {
      if (a + b < A + B && b < B) {
        printf("Yes\n");
        b++;
      } else {
        printf("No\n");
      }
    } else {
      printf("No\n");
    }
  }
}