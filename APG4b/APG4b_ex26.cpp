#include <bits/stdc++.h>
using namespace std;

map<char, int> mi;
map<char, vector<int>> mv;

bool is_letter(char c) {
  return 'a' <= c && c <= 'z';
}

bool is_number(char c) {
  return '1' <= c && c <= '9';
}

int ctoi(char c) {
  return c - '0';
}

bool is_operator(char c) {
  return c == '+' || c == '-';
}

int calc_int(string &cmd, int i = 8) { // skip irrelevant part
  int sum = 0;
  bool minus = false;

  for ( ; i < cmd.size(); i++) {
    if (is_operator(cmd[i])) {
      minus = cmd[i] == '-';
      continue;
    }

    if (is_number(cmd[i])) {
      if (minus) {
        sum -= ctoi(cmd[i]);
      } else {
        sum += ctoi(cmd[i]);
      }
    } else if (is_letter(cmd[i])) {
      if (minus) {
        sum -= mi[cmd[i]];
      } else {
        sum += mi[cmd[i]];
      }
    }
  }

  return sum;
}

void declare_int(string &cmd) {
  mi[cmd[4]] = calc_int(cmd);
}

void print_int(string &cmd) {
  cout << calc_int(cmd, 10) << endl;
}

vector<int> calc_vec(string &cmd, int i = 8) {
  vector<int> rslt;
  bool initializing = true;
  bool minus = false;
  int cnt = 0;

  for ( ; i < cmd.size(); i++) {
    if (is_operator(cmd[i])) {
      initializing = false;
      minus = cmd[i] == '-';
      cnt = 0;
      continue;
    }

    if (is_number(cmd[i])) {
      if (initializing) {
        rslt.push_back(ctoi(cmd[i]));
      } else if (minus) {
        rslt[cnt] -= ctoi(cmd[i]);
        cnt++;
      } else {
        rslt[cnt] += ctoi(cmd[i]);
        cnt++;
      }
    } else if (is_letter(cmd[i])) {
      if (mi.count(cmd[i]) > 0) { // int declared previously
        if (initializing) {
          rslt.push_back(mi[cmd[i]]);
        } else if (minus) {
          rslt[cnt] -= mi[cmd[i]];
          cnt++;
        } else {
          rslt[cnt] += mi[cmd[i]];
          cnt++;
        }
      } else { // vec declared previously
        if (initializing) {
          rslt = mv[cmd[i]];
        } else {
          for (int j = 0; j < mv[cmd[i]].size(); j++) {
            if (minus) {
              rslt[j] -= mv[cmd[i]][j];
            } else {
              rslt[j] += mv[cmd[i]][j];
            }
          }
        }
      }
    }
  }

  return rslt;
}

void declare_vec(string &cmd) {
  mv[cmd[4]] = calc_vec(cmd);
}

void print_vec(string &cmd) {
  cout << "[ ";
  for (const int &i : calc_vec(cmd, 10)) {
    cout << i << " ";
  }
  cout << "]" << endl;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string cmd;
    getline(cin >> ws, cmd);

    if (cmd[0] == 'i') {
      declare_int(cmd);
    } else if (cmd[0] == 'v') {
      declare_vec(cmd);
    } else if (cmd[6] == 'i') {
      print_int(cmd);
    } else {
      print_vec(cmd);
    }
  }
}
