#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, K, S, T;
  cin >> N >> K >> S >> T;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 0;
  int S_bit;
  int T_bit;
  bool first = true;
  for (int bit = 0; bit < (1 << N); bit++) {
    for (int i = 0; i < N; i++) {
      if (bit & (1<<i) == 1) {
        if (first) {
          S_bit = A[i];
          T_bit = A[i];
          first = false;
        } else {
          S_bit = S_bit & A[i];
          T_bit = T_bit | A[i];
        }
      }
    }

    first = true;
    if (S_bit == S && T_bit == T) {
      ans++;
    }
  }
  
  cout << S_bit << endl;
  cout << T_bit << endl;
  cout << ans << endl;
}
