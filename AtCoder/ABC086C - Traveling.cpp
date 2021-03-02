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

  bool ans = true;
  for (int i = 0; i < N; i++) {
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    if (dt < dist) ans = false;
    if (dist % 2 != dt % 2) ans = false;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
