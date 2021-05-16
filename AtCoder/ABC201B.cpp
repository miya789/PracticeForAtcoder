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

bool compare_by_b(pair<string, int> a, pair<string, int> b) {
    if(a.second != b.second) {
      return a.second > b.second;
    } else {
      return a.first > b.first;
    }
}

void _main() {
  ll N;
  cin >> N;

  vector<pair<string,ll>> ST(N);
  REP(i,0,N) {
    string S;
    ll T;
    cin >> S >> T;

    ST[i] = make_pair(S, T);
  }

  sort(ST.begin(), ST.end(), compare_by_b);

  cout << ST[1].first << endl;
}
