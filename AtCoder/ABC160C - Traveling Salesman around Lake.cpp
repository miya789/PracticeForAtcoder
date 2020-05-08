#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int K, N;
int A[MAX_N];

int main() {
  cin >> K >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  int max_diff = 0;
  int tmp = A[N-1];
  for (int i = N-1; i > 0; i--) {
    A[i] -= A[i-1];
  }
  A[0] = A[0] + K - tmp;
  for (int i = 0; i < N; i++){
    chmax(max_diff, A[i]);
  }
  cout << K - max_diff << endl;
}
