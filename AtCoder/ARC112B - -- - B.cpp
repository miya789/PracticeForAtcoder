#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define REP(i,n) for (int i=0; i<n; i++)
using ll = long long;
using P = pair<int,int>;

pair<long, long> extract(const long&B, const long&C) {
  const auto n = C/2;
  if (C%2) {
    return {-B-n, -B+n};
  } else {
    if (!C) return {B,B};
    return {B-n, B+n-1};
  }
}

int main() {
  long B, C;
  cin >> B >> C;
  const auto [a,b] = extract(B,C);
  const auto [c,d] = extract(B,C-1);
  cout << (b-a+1) + (d-c+1) - max(0l, min(b,d)-max(a,c)+1) << endl;
  return 0;
}
