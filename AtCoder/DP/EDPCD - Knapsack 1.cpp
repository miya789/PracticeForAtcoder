#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 110
#define MAX_W 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N;
long long W, weight[MAX_N], value[MAX_N];

// DP table
long long dp[MAX_N][MAX_W] = {0};

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; i++) cin >> weight[i] >> value[i];

    // for (int i = 1; i < MAX_N; i++) {dp[0][i] = INF;}

    // Update
    for (int i = 0; i < N; i++) {
        for (int sum_w = 0; sum_w <= W; sum_w++) {
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    // Ans
    cout << dp[N][W] << endl;
}