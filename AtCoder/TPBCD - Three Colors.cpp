#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#define MAX_N 400
#define MAX_S 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;
const long long mod = 998244353; 

// Input
int N;
long long L, a[MAX_N];

// DP table
long long dp[MAX_K][MAX_S] = {0};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];
    int ct;

    // Initialization
    L = 0;
    for (int i = 0; i < N; i++) L += a[i];
    dp[0][0] = 0

    // Update
    for (int i = 3; i < N; i++) {
        for (int sum_l = 0; sum_l <= L; sum_l++) {
            if () {
                ct++;
            }
        }
    }

    // Ans
    cout << ct % mod << endl;
}