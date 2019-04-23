#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) { a = b; return 1;} return 0; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) { a = b; return 1;} return 0; }

const long long INF = 1LL << 60;

// Input
int N;
long long a[MAX_N];

// DP table
long long dp[MAX_N];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];

    // Initialization
    for (int i = 0; i < MAX_N; i++) dp[i] = INF;

    // Initial state
    dp[0] = 0;

    // Update
    for (int i = 1; i < N; i++) {
        chmin(dp[i], dp[i-1] + abs(a[i] - a[i-1]));
        if (i > 1) chmin(dp[i], dp[i-2] + abs(a[i] - a[i-2]));
    }

    // Ans
    cout << dp[N-1] << endl;
}