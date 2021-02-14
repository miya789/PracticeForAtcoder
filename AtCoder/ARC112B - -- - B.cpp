#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define REP(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll B, C;
  cin >> B >> C;
  ll C12 = floor((C-1)/2);
  ll C2 = floor(C/2);
  ll C22 = floor((C-2)/2);
  if (B>0) {
    if (C12>B) {
      cout << C12 + (2*B - 1) + C22 + 2 << endl;
    } else {
      cout << 2*C12 + C2 + C22 + 2 << endl;
    }
  } else if (B<0) {
    if (C22>-B) {
      cout << C2 + (2*(-B) - 1) + C12 + 1 << endl;
    } else {
      cout << C2 + C22 + C12 + C12 + 2 << endl;
    }
  } else {
    cout << C2 + C12 + 1 << endl;
  }

  return 0;
}
