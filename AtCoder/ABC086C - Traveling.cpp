#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<ll> t(N);
  vector<ll> x(N);
  vector<ll> y(N);
  for (int i = 0; i < N; i++) cin >> t[i] >> x[i] >> y[i];

  bool ans = false;

  int tmp = 0;
  for (int i = 0; i < N; i++) {
    if ((x[i] + y[i] - (t[i]-tmp)) % 2) {
      ans = false;
      break;
    } else {
      tmp += t[i];
      ans = true;
    }
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
