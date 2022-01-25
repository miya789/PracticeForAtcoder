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

  vector<ll> a(N);
  map<ll, vector<ll>> m;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    m[a[i]].push_back(i+1);
  }

  vector<ll> x(Q), k(Q);
  for (int i = 0; i < Q; i++) {
    cin >> x[i] >> k[i];
  }

  for (int i = 0; i < Q; i++) {
    // if (m.find(x[i]) == m.end()) {
    //   cout << -1 << endl;
    //   continue;
    // }
    if  (m[x[i]].size() >= k[i]) {
      cout << m[x[i]][k[i]-1] << endl;
    } else {
      cout << -1 << endl;
    }    
  }
}
