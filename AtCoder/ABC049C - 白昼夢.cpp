#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

  bool ans = true;
  for (int i = 0; i < S.size();) {
    bool tmp = false;
    for (int j = 0; j < 4; j++) {
      string d = divide[j];
      if (S.substr(i,d.size()) == d) {
        tmp = true;
        i += d.size();
      }
    }
    if (!tmp) {
      ans = false;
      break;
    }
  }

  if (ans) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}