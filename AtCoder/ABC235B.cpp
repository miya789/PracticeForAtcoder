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
  ll N;
  cin >> N;
  vector<ll> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  ll ans_pos = 0;
  if (ans_pos == N-1) {
    cout << H[ans_pos] << endl;
    exit;
  }

  while (H[ans_pos] < H[ans_pos+1]) {
    ans_pos++;
  }
  cout << H[ans_pos] << endl;
}
