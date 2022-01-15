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
  int S;
  cin >> S;
  
  int a = S/100;
  S %= 100;
  int b = S/10;
  int c = S%10;

  ll ans = 0;
  ans = (a*100+b*10+c) + (b*100+c*10+a) + (c*100+a*10+b);
  cout << ans << endl;
}
