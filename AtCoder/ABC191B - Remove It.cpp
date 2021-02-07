#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  vector<int> ans;
  for (int i = 0; i < N; i++) {
    if (A[i] != X) {
      ans.push_back(A[i]);
    }
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}
