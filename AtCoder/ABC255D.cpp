#include <bits/stdc++.h>
#include <math.h>
#define REP(i,a,b) for (int i=a; i<b; i++)
#define ALL(v) (v).begin(), (v).end()
#define FORE(i,a) for(auto &i:a)
using namespace std;
typedef long long ll;
const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (a>b) { a=b; return 1; } return 0; }
//#pragma GCC optimize ("-O3")
void _main(); int main() {cin.tie(0); ios::sync_with_stdio(false); _main(); }

void _main() {
  ll N, Q;
  cin >> N >> Q;
  vector<ll> A(N), X(Q);
  REP(i,0,N) cin >> A[i];
  REP(i,0,Q) cin >> X[i];

  REP(i,0,Q) {
    ll ans = 0;
    REP(j,0,N) {
      ans += abs(A[j] - X[i]);
    }
    cout << ans << endl;
  }
}
