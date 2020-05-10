#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
long long N, K;
long long A[MAX_N];
int A_dp[MAX_N];

int main() {
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    A[i]--;
    A_dp[i] = -1;
    cout << i << "," << A[i] << endl;
  }
  

  int loc = 0;
  int ct = 0;
  int T = 0;
  int next = A[loc];
  while (A_dp[loc] == -1) {
    next = A[loc];
    A_dp[loc] = next;
    cout << loc << "->" << next << " (" << A_dp[loc] << ")" << endl;
    loc = next;
    ct++;
    T = ct;
  }
  int ans = 0;
  for (int j = 0; j < T; j++) {
    if (A_dp[j] == A_dp[T-1])
      ans = T -j;
  }

  cout << T << endl;
  cout << ans << endl;
  cout << (K-ans-1) % T << endl;

  cout << A[(K-ans-1) % T + ans]++ << endl;
}
