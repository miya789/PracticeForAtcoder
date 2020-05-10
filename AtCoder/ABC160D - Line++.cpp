#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N, X, Y;

int main() {
  cin >> N >> X >> Y;
  vector<int> ans(N,0);
  X--;
  Y--;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int d = min(min(abs(j-i),abs(X-i) + 1 + abs(j-Y)),abs(Y-i) + 1 + abs(j-X));
      ans.at(d)++;
    }
  }
  for (int d = 1; d < N; d++) {
    cout << ans.at(d) << endl;
  }
}
