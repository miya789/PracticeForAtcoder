#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int target = max(max(A,B),C);
  if ((A+B+C) % 2 != target % 2) target++;

  int ans = 0;
  ans = abs(target-A) + abs(target-B) + abs(target-C);
  ans /= 2;

  cout << ans << endl;
  return 0;
}
