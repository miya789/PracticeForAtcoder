#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int X, N;
  cin >> X >> N;
  vector<int> p(N);
  if (N != 0) {
    for (int i = 0; i < N; i++) cin >> p.at(i);
  } else {
    int dust;
    // cin >> dust;
  }

  int candidate = 0;
  for (int i = 0; i <= 101; i++) {
    bool flag = true;
    for (int j = 0; j<N; j++) {
      if (p[j] == i) flag = false;
    }
    if (flag) {
      if (abs(candidate-X) > abs(i-X)) {
        candidate = i;
      }
    }
  }
  
  cout << candidate << endl;
  return 0;
}
