#include <iostream>

int n, W;
int weight[110], value[110];

int dp[110][10010];

int main() {
  std::cin >> n >> W;
  for (int i = 0; i < n; i++) std::cin >> value[i] >> weight[i];

  for (int w = 0; w <= W; w++) dp[0][w] = 0;

  for (int i = 0; i < n; i++) {
    for (int w = 0; w <= W; w++) {
      if (w >= weight[i]) {
        dp[i + 1][w] = std::max(dp[i][w-weight[i]] + value[i], dp[i][w]);
      } else {
        dp[i + 1][w] = dp[i][w];
      }
      // std::cout << i << "\t" << w << "\t" << dp[i][w] << std::endl;
    }
  }

  std::cout << dp[n][W] << std::endl;
}
