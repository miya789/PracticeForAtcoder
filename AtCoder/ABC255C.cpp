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
  ll X, A, D, N;
  cin >> X >> A >> D >> N;

  ll min_A;
  ll max_A;
  if (D < 0) {
    ll fi = A+D*(N-1);
    A = fi;
    D *= -1;
  }

  min_A = A;
  max_A = A + (N - 1) * D;

  ll ans = 8E18;
  if (X <= min_A) {
    ans = min(ans, abs(min_A - X));
  } else if (max_A <= X) {
    ans = min(ans, abs(X - max_A));
  } else {
    if(D!=0) {
      ans = (X - min_A) % D;
      ans = min(ans,D-ans);
    } else {
      ans = 0;
    }
  }
  cout << ans << endl;
}
