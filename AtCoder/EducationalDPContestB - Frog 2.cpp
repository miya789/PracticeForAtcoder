#include <iostream>
#include <vector>
#include <cstdlib>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

// input
int N, K;
long long h[100010];

// DP table
long long dp[100010];

long long rec(int i) {
  if (i == 0) return 0;
  long long res = INF;
  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));
  chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));

  return res;
}

int main() {
  std::cin >> N >> K;
  for (int i = 0; i < N; i++) std::cin >> h[i];

  // intialization
  for (int i = 0; i < 100010; i++) dp[i] = INF;
  dp[0] = 0;

  // loop
  for (int i = 0; i < N; i++) {
    for (int j = 1; j <= K; j++) {
      // std::cout << i << "\t" << j << std::endl;
      chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }

  std::cout << dp[N - 1] << std::endl;
}
