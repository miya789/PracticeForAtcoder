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
int A[MAX_N], B[MAX_N], C[MAX_N];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {cin >> A[i];}
    for (int i = 0; i < M; i++) {
        cin >> B[i] >> C[i];
    }

    sort(A, A + N);

    int tmp = accumulate(A,A+N,0);
    for (int i = 0; i < M; i++) {
        int ans = 0;
        for (int j = 0; j < N; j++) {
            if (j < B[i]) {
                ans += C[i];
            } else {
                ans += A[j];
            }
        }
        chmax(tmp, ans);
    }

    cout << tmp << endl;
}