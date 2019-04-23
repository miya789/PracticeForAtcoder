#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 110
#define MAX_V 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N;
long long W, weight[MAX_N], value[MAX_N];

// DP table
long long dp[MAX_N][MAX_V];

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; i++) cin >> weight[i] >> value[i];

    // Initialization
    for (int i = 0; i < MAX_N; i++) for (int j = 0; j < MAX_V; j++) dp[i][j] = INF;

    // Initial state
    dp[0][0] = 0;

    // Update
    for (int i = 0; i < N; i++) {
        for (int sum_v = 0; sum_v < MAX_V; sum_v++) {
            if (sum_v - value[i] >= 0) chmin(dp[i+1][sum_v], dp[i][sum_v - value[i]] + weight[i]);
            chmin(dp[i+1][sum_v], dp[i][sum_v]);
        }
    }

    // Ans
    long long res = 0;
    for (int sum_v = 0; sum_v < MAX_V; sum_v++) {
        if (dp[N][sum_v] <= W) res = sum_v;
    }
    cout << res << endl;
}
