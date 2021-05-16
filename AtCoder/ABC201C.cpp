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
  string S;
  cin >> S;

  // int need = 0;
  // REP(i,0,10) {
  //   if (S[i] == 'o') {
  //     need++;
  //   }
  // }

  // if (need > 4) {
  //   cout << "0" << endl;
  //   return;
  // }
  // cout << need << endl;

  ll ans = 0;
  REP(i,0,10000) {
    vector<bool> used(10);

    int tmp = i;
    REP(j,0,4) {
      used[tmp%10]  = true;
      tmp /= 10;
    }

    bool check = true;
    REP(j,0,10) {
      if (S[j] == 'o' && !used[j]) check = false;
      if (S[j] == 'x' && used[j]) check = false;
    }
    ans += check;
  }

  cout << ans << endl;
}
