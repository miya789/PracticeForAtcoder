#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N, M;
long long L[MAX_N], R[MAX_N];

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }

    long long max_L = 0;
    long long min_R = INF;
    for (int i = 0; i < M; i++) {
        max_L = max(max_L, L[i]);
        min_R = min(min_R, R[i]);
    }

    long long ans = min_R - max_L + 1;
    long long result = (ans >= 0)? ans : 0;
    cout << result << endl;
}