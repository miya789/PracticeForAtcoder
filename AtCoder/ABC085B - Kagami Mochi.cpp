#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i = 0; i < N; i++) cin >> d.at(i);

  sort(d.begin(),d.end());
  int tmp = -1;
  int ct = 0;
  for (int i = 0; i < N; i++) {
    if (tmp != d[i]) {
      ct++;
      tmp = d[i];
    }
  }
  cout << ct << endl;
  return 0;
}
