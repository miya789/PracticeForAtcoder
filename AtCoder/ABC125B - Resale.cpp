#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N;
int C[MAX_N], V[MAX_N];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> V[i];
    for (int i = 0; i < N; i++) cin >> C[i];

    int ans = 0;
    int cost = 0;
    for (int i = 0; i < N; i++) {
        if (V[i] > C[i]) {
            ans += V[i];
            cost += C[i];
        }
    }

    // Ans
    cout << ans-cost << endl;
}
