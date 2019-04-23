#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 60
#define MAX_W 10000
#define MAX_K 60

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N;
long long W, K, A[MAX_N], B[MAX_N];

// DP table
long long dp[MAX_N][MAX_W][MAX_K] = {0};

int main() {
    cin >> W;
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    // Update
    for (int i = 0; i < N; i++) {
        for (int sum_w = 0; sum_w <= W; sum_w++) {
            for (int sum_k = 0; sum_k <= K; sum_k++) {
                if (sum_w - A[i] >= 0 && sum_k - 1 >= 0) {
                chmax(dp[i+1][sum_w][sum_k], dp[i][sum_w - A[i]][sum_k - 1] + B[i]);
                }
                chmax(dp[i+1][sum_w][sum_k], dp[i][sum_w][sum_k]);
            }
        }
    }

    // Ans
    cout << dp[N][W][K] << endl;
}