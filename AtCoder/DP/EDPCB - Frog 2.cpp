#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) { a = b; return true;} return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) { a = b; return true;} return false; }

const long long INF = 1LL << 60;

// Input
int N, K;
long long h[MAX_N];

long long dp[MAX_N];

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> h[i];

    // Initialization
    for (int i = 0; i < MAX_N; i++) dp[i] = INF;

    // Initial state
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            chmin(dp[i+j], dp[i] + abs(h[i+j] - h[i]));
        }
    }

    // Ans
    cout << dp[N-1] << endl;
}