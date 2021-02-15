#include <bits/stdc++.h>
#include <string>
using ll = long long;
using namespace std;

int main() {
  string s;
  cin >> s;
  int ct = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '1') ct++;
  }
  cout << ct << endl;
  return 0;
}

