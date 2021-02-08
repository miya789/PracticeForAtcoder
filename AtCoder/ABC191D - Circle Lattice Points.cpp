#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define REP(i,n) for (int i=0; i<n; i++)
using ll = long long;

bool inside(ll x, ll y, ll X, ll Y, ll R) {
  return (x-X) * (x-X) + (y-Y) * (y-Y) <= R*R;
  // if pow, there is error
}

ll f(ll X, ll Y, ll R, ll lim) {
  int step = 10000;
  int l=0, r=1;
  ll res=0;
  for (int i=int(1e9)+50000; i >= lim; i-=10000) {
    while (inside(r*step, i, X, Y, R)) { r++; }
    while (inside(l*step, i, X, Y, R)) { l--; }
    res += r-l-1;
  }
  return res;
}

int main() {
  double X_f, Y_f, R_f;
  cin >> X_f >> Y_f >> R_f;

  ll X = round(X_f * 10000);
  ll Y = round(Y_f * 10000);
  ll R = round(R_f * 10000);
  X %= 10000;
  Y %= 10000;

  // cout << X << ", " << Y << ", "<< R << endl;

  int step = 10000;

  // ll ans = f(X,Y,R,10000);
  // ans += f(X,-Y,R,0);
  int l=0, r=1;
  ll ans=0; // if int, overflow causes megative value
  for (ll y = (1e9)+50000; y >= step; y-=step) {
    while (inside(r*step, y, X, Y, R)) { r++; }
    while (inside(l*step, y, X, Y, R)) { l--; }
    ans += r-l;
    ans --; // because of while, there is extra
    // cout << r << ", " << l << ", "<< y << endl;
  }
  l=0, r=1;
  for (ll y = -((1e9)+50000); y <= 0; y+=step) {
    while (inside(r*step, y, X, Y, R)) { r++; }
    while (inside(l*step, y, X, Y, R)) { l--; }
    ans += r-l-1;
    // cout << r << ", " << l << ", "<< y << endl;
  }

  // float test_f;
  // int test_int;

  // test_f = 0.0012;
  // test_int = test_f*10000;
  // cout << test_int << endl;

  // test_f = 0.5312;
  // test_int = test_f*10000;
  // cout << test_int << endl;

  // test_f = -0.0012;
  // test_int = test_f*10000;
  // cout << test_int << endl;

  // test_f = -0.5312;
  // test_int = test_f*10000;
  // cout << test_int << endl;

  cout << ans << endl;

  return 0;
}
