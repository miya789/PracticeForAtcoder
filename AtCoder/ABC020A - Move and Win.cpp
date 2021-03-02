#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  if ((A-B) % 2) cout << "Borys" << endl;
  else cout << "Alice" << endl;

  return 0;
}
