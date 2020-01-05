#include <iostream>
#include <vector>
#include <cstdlib>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

// input
int N;
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
  std::cin >> N;
  for (int i = 0; i < N; i++) std::cin >> h[i];

  // intialization
  for (int i = 0; i < 100010; i++) dp[i] = INF;
  dp[0] = 0;

  // loop
  for (int i = 0; i < N; i++) {
    // collect version
    // chmin(dp[i], dp[i - 1] + abs(h[i] - h[i-1]));
    // if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i -2]));
    // give version
    std::cout << "chmin i+1\t" << i << std::endl;
    chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    std::cout << "chmin i+2\t" << i << std::endl;
    chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
  }

  std::cout << dp[N - 1] << std::endl;
}
