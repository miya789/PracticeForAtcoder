#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 0;
  bool end = true;
  while (end) {
    for (int i = 0; i < N; i++) {
      if (A[i] % 2) {
        end = false;
        break;
      }
      A[i] /= 2;
    }
    if (end) ans++;
  }
  cout << ans << endl;
  return 0;
}

