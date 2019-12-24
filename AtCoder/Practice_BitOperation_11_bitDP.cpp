#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

const int INF = 100000000;

int N;
int dist[21][21];

int dp[(1<<20) + 1][21];

int rec(int bit, int end) {
  if (dp[bit][end] != -1) return dp[bit][end];

  if (bit == (1<<end)) {
    return dp[bit][end] = 0;
  }

  int res = INF;
  int prev_bit = bit & ~(1<<end);

  for (int start = 0; start < N; start++) {
    if (!(prev_bit & (1<<start))) continue; // prev_bit should include "start"

    if (res > rec(prev_bit, start) + dist[start][end]) {
      res = rec(prev_bit, start) + dist[start][end];
    }
  }
  return dp[bit][end] = res; // memorize
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> dist[i][j];
    }
  }

  for (int bit = 0; bit < (1<<N); bit++) for (int end = 0; end < N; end++) dp[bit][end] = -1;

  int res = INF;
  for (int end = 0; end < N; end++) {
    if(res > rec((1<<N)-1, end)) {
      res = rec((1<<N)-1, end);
    }
  }
  cout << res << endl;
}
