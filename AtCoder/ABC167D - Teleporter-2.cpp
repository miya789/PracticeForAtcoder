#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;
  vector<int>  A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    A[i]--;
  }  

  set<int> used;
  vector<int> path;
  int now = 0;
  while (used.count(now) == 0) {
    path.push_back(now);
    used.insert(now);
    now = A[now];
  }

  int initial = find(path.begin(), path.end(), now) - path.begin();
  int T = path.size() - initial;

  if (K < initial) {
    cout << path[K] + 1 << endl;
    return 0;
  } else { // (K - initial) が T より大きいと変な余りにされて，ループに入った様に，ある区間は行けなくなってしまうので場合分け
    cout << path[(K - initial) % T + initial] + 1 << endl;
  }
}
