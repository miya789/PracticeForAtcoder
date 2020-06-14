#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll A, B;
  ll V, W, T;
  cin >> A >> V;
  cin >> B >> W;
  cin >> T;

  if (V <= W) {
    cout << "NO" << endl;
    return 0;
  }

  if ((V-W) * T >= abs(A-B)) {
      cout << "YES" << endl;
  } else {
      cout << "NO" << endl;
  }
}
