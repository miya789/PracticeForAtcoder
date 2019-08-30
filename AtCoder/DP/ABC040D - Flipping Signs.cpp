#include <algorithm>
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
long long A[MAX_N];

// MAX table
long long MAX_TABLE[MAX_N];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    // Initialization
    for (int i = 0; i < MAX_N; i++) MAX_TABLE[i] = 0;

    // Summation
    long long sum = 0;
    for (int i = 0; i < N; i++) sum += A[i];

    // Update
    long long temp = 0;
    for (int i = 1; i < N-1; i++) {
        temp = max(temp, sum + (-2)*A[i] + (-2)*A[i+1]);
    }

    // Ans
    cout << temp << endl;
}