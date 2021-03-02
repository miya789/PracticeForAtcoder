#include <bits/stdc++.h>
using namespace std;

int main () {
  int N;
  cin >> N;
  vector<int> A(N);

  int odd_ct = 0;
  int even_ct = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (A[i] % 2) odd_ct++;
    else even_ct++;
  }

  if (odd_ct % 2) {
    if (even_ct != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
  } else cout << "YES" << endl;

  return 0;
}
