#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define REP(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll T;
  cin >> T;
  vector<ll> L(T), R(T);
  REP(i,T) {
    cin >> L.at(i) >> R.at(i);
  }
  REP(i,T) {
    if (R[i] < L[i]*2) {
      cout << 0 << endl;
      continue;
    } else if (R[i] == L[i]*2) {
      cout << 1 << endl;
      continue;
    } else {
      ll l = min(R[i] - L[i], L[i]);
      ll a = R[i] - l*2;
      if (a==0) { cout << 1 << endl; }
      else { cout << (a+1)*(a+2)/2 << endl;}
    }
  }

  return 0;
}
