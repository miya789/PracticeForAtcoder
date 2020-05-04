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
int K, N;
int A[MAX_N];

int main() {
  cin >> K >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  int max_diff = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i+1; j < N; j++) {
      int judge = (A[i] - K/2) * (A[j] - K/2);
      if (judge >= 0) {
        // cout << A[i] << ",\t" << A[j] << ",\t" << judge << ",\t" << abs(A[i] - A[j]) << endl;
        chmax(max_diff, abs(A[i] - A[j]));
      } else {
        // cout << A[i] << ",\t" << A[j] << ",\t" << judge << ",\t" << K - abs(A[i] - A[j]) << endl;
        chmax(max_diff, K - abs(A[i] - A[j]));
      }
    }
  }

  cout << K - max_diff << endl;
}
