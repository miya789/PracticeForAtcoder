#include <iostream>

int n;
int a[10010];

int dp[10010];

int main() {
  std::cin >> n;
  for (int i = 0; i < n; i++) std::cin >> a[i];

  // dp[0] = 0;
  for (int i = 0; i < n; i++) {
    dp[i + 1] = std::max(dp[i], dp[i] + a[i]);
    // std::cout << dp[i] << std::endl;
  }

  std::cout << dp[n] << std::endl;
}