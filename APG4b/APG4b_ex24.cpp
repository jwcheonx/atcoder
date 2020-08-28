#include <bits/stdc++.h>
using namespace std;

struct Clock {
  int h; // hours (0-23)
  int m; // minutes (0-59)
  int s; // seconds (0-59)

  void set(int h_, int m_, int s_) {
    h = h_;
    m = m_;
    s = s_;
  }

  void shift(int diff) {
    if (h == 0) h = 24;
    int ttl_in_sec = h * 3600 + m * 60 + s;
    ttl_in_sec += diff;

    int h_ = ttl_in_sec / 3600;
    ttl_in_sec %= 3600;

    int m_ = ttl_in_sec / 60;
    int s_ = ttl_in_sec % 60;

    set(h_ % 24, m_, s_);
  }

  void print() {
    string rslt = "";

    if (h < 10) rslt += "0";
    rslt += to_string(h) + ":";

    if (m < 10) rslt += "0";
    rslt += to_string(m) + ":";

    if (s < 10) rslt += "0";
    rslt += to_string(s);

    cout << rslt << endl;
  }
};

int main() {
  int h, m, s, diff;
  cin >> h >> m >> s >> diff;

  Clock c;
  c.set(h, m, s);
  c.print();

  c.shift(diff);
  c.print();
}
