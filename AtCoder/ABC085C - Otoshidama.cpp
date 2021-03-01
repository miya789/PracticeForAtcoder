#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, Y;
  cin >> N >> Y;

  bool ans = false;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      int k = N-i-j;
      if (k<0) continue;
      if ((10000*i + 5000*j + 1000*k == Y) && !ans) {
        ans = true;
        cout << i << " " << j << " " << k << endl;
      }
    }
  }
  if (!ans) {
    cout << "-1 -1 -1" << endl;
  }

  return 0;
}