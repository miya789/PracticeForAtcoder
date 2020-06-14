#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 0;
  for (int i = 0; i < N; i++) {
    bool flag = true;
    for (int j = 0; j < N; j++) {
      if (i != j){
        if (A[i] % A[j] == 0){
          flag = false;
          break;
        }
      }
    }
    if (flag) ans++;
  }

  cout << ans << endl;
  return 0;
}
