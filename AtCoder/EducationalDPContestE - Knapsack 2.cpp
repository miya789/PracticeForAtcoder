#include <iostream>
#include <vector>
#include <cstdlib>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

const int MAX_N = 100;
const int MAX_V = 100100;

// input
int N;
long long W, weight[MAX_N], value[MAX_V];

// DP table
long long dp[MAX_N][MAX_V];

int main() {
  std::cin >> N >> W;
  for (int i = 0; i < N; i++) std::cin >> weight[i] >> value[i];

  // initialize
  for (int i = 0; i < MAX_N; i++) for (int j = 0; j < MAX_V; j++) dp[i][j] = INF;
  dp[0][0] = 0;

  // loop
  for (int i = 0; i < N; i++) {
    for (int sum_v = 0; sum_v < MAX_V; sum_v++) {
      // std::cout << dp[i][k] << "\t" << i << "\t" << j << "\t" << k << std::endl;
      if (sum_v - value[i] >= 0) chmin(dp[i+1][sum_v], dp[i][sum_v - value[i]] + weight[i]);
      chmin(dp[i+1][sum_v], dp[i][sum_v]);
    }
  }

  long long res = 0;
  for (long long sum_v = 0; sum_v < MAX_V; sum_v++) {
    if (dp[N][sum_v] <= W) chmax(res, sum_v);
  }
  std::cout << res << std::endl;
}
