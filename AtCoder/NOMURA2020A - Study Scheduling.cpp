#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>
#include <queue>
using namespace std;
#define MAX_M 200000
#define MAX_N 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int H1, M1, H2, M2, K;

int main() {
  cin >> H1 >> M1 >> H2 >> M2 >> K;
  
  int start = H1 * 60 + M1;
  int end = H2 * 60 + M2;
  int should_start = end - K;

  int ans = 0;
  if (should_start >= start) {
    ans = should_start - start;
  }

  cout << ans << endl;
  return 0;
}
