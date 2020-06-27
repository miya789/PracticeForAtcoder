#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX_N 100000

int main() {
  string S, T;
  cin >> S;
  cin >> T;

  int ans = 0;
  for (int i = 0; i < S.length(); i++) {
    if (S[i] != T[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}
