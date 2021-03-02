#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> s;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;

    if (s.count(a)) {
      s.erase(a);
    } else {
      s.insert(a);
    }
  }

  cout << s.size() << endl;
  return 0;
}
