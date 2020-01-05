#include <iostream>
#include <vector>
#include <cstdlib>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// input
int N;
long long a[100010][3];

// DP table
long long dp[100010][3];

int main() {
  std::cin >> N;
  for (int i = 0; i < N; i++) for(int j = 0; j < 3; j++) std::cin >> a[i][j];

  // // intialization
  // for (int i = 0; i < 100010; i++) dp[i][0] = 0;
  // dp[0][0] = 0;

  // loop
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (j == k) continue;
        // std::cout << dp[i][k] << "\t" << i << "\t" << j << "\t" << k << std::endl;
        chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
      }
    }
  }

  long long res = 0;
  // only get
  for (int j = 0; j < 3; j++) chmax(res, dp[N][j]);
  std::cout << res << std::endl;
}
