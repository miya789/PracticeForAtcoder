#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];
  sort(A.begin(), A.end());

  int tmp = -1;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (tmp != A[i]) {
      tmp = A[i];
      ans++;
    } else {
      ans--;
      tmp = -1;
    }
  }

  cout << ans << endl;
  return 0;
}
