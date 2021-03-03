#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int ans = 0;
  bool skip = false;
  int past_diff = 1;
  for (int i = 1; i < N; i++) {
    int diff = A[i] - A[i-1];
    if (i==1) past_diff = diff;

    if (skip) {
      skip = false;
    } else {
      if (past_diff * diff < 0) {
        ans++;
        skip = true;
      }
    }

    if (diff != 0) past_diff = diff;
  }
  
  cout << ans+1 << endl;

  return 0;
}
