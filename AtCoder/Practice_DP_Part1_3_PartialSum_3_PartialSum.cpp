#include <iostream>
#include <cstring>

int n, A;
int a[110];

int dp[110][10010];

int main() {
  std::cin >> n >> A;
  for (int i = 0; i < n; i++) std::cin >> a[i];

  // for (int i = 0; i < n; i++) dp[]
  memset(dp, 0, sizeof(dp));
  dp[0][0] = true;

  for (int i = 0; i < n; i++) {
    for (int sum = 0; sum <= A; sum++) {
      // 0の場合も含む為，これを切欠に纏められる
      // if (sum == a[i]) {
      //   dp[i+1][sum] = true;
      // } else {
      //   if (sum >= a[i]) dp[i+1][sum] = (dp[i][sum] || dp[i][sum - a[i]]);
      // }

      // 自作
      dp[i+1][sum] = dp[i][sum];
      if (sum >= a[i]) dp[i+1][sum] = dp[i][sum-a[i]] | dp[i][sum];
      // 参考にしたコードはこっち
      // dp[i+1][j] |= dp[i][j];
      // if (j >= a[i]) dp[i+1][j] |= dp[i][j-a[i]];

      // std::cout << i << "\t" << sum << "\t" << dp[i+1][sum] << std::endl;
    }
  }
  if (dp[n][A]) std::cout << "YES" << std::endl;
  else std::cout << "NO" << std::endl;
  // std::cout << dp[3][6] << std::endl;
}
