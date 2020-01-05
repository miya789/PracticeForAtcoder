#include <iostream>
#include <vector>
#include <cstdlib>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// input
int N;
long long W, weight[110], value[110];

// DP table
long long dp[110][100100] = {0}; // 重さがちょうどピッタリ sum_w となる場合は?

int main() {
  std::cin >> N >> W;
  for (int i = 0; i < N; i++) std::cin >> weight[i] >> value[i];

  // loop
  for (int i = 0; i < N; i++) {
    for (int sum_w = 0; sum_w <= W; sum_w++) {
      // std::cout << dp[i][k] << "\t" << i << "\t" << j << "\t" << k << std::endl;
      if (sum_w - weight[i] >= 0) chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
      chmax(dp[i+1][sum_w], dp[i][sum_w]);
    }
  }

  std::cout << dp[N][W] << std::endl;
}
