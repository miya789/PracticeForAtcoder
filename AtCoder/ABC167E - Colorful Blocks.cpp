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
long long N, M, K;

int main() {
  cin >> N >> M >> K;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    A[i]--;
    // cout << i << "," << A[i] << endl;
  }
  

  int i = 0;
  int T = 0;
  int next = A[i];
  while (next != 0) {
    next = A[i];
    T = i;
    // cout << i << "->" << next << endl;
    i = next;
  }
  
  // cout << T << endl;

  cout << A[K % T]++ << endl;
}
