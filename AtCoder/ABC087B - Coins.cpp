#include <bits/stdc++.h>
using namespace  std;
#define REP(i,n) for (int i=0; i<n; i++)

int main() {
  int A, B, C, X;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> X;
  int ans = 0;
  REP(a, A+1) {
    REP(b, B+1) {
      REP(c, C+1) {
        if (a*500 + b*100 + c*50 == X) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
