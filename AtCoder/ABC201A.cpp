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
  vector<ll> A(3);
  cin >> A[0] >> A[1] >> A[2];

  sort(A.begin(), A.end());

  ll diff1 = abs(A[1] - A[0]);
  ll diff2 = abs(A[2] - A[1]);

  if (diff1 == diff2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
