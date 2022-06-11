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
  int N, K;
  cin >> N >> K;
  vector<int> A(K);
  REP(i,0,K) cin >> A[i];
  vector<int> X(N), Y(N);
  REP(i,0,N) cin >> X[i] >> Y[i];

  int max_distance_square=0;
  REP(i,0,N) {
    REP(j,0,K) {
      int pos_squre = pow(X[i] - X[A[j]-1],2) + pow(Y[i] - Y[A[j]-1],2);
      if (pos_squre > max_distance_square) {
        max_distance_square = pos_squre;
      }
    }
  }

  double ans = sqrt(max_distance_square);
  cout << ans << endl;
}
