#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }

// Input
int N;
long long a[MAX_N][3];

// DP table
long long dp[MAX_N][3];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) for (int j = 0; j < 3; j++) cin >> a[i][j];

    // Initialization
    // for (int i = 0; i < N; i++) for (int j = 0; j < 3; j++) dp[i][j] = 0LL;
    
    // Initial state
    // ~~~

    // Update
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) continue;
                chmax(dp[i+1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    // Answer
    long long res = 0;
    for (int j = 0; j< 3; j++) chmax(res, dp[N][j]);
    cout << res <<endl;
}
