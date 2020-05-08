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
  vector<int> vec(N);
  for (int i = 0; i < N; i++) cin >> vec.at(i);

  int tmp = vec.at(N-1);
  for (int i = N-1; i > 0; i--) {
    vec.at(i) -= vec.at(i-1);
  }
  vec.at(0) = vec.at(0) + K - tmp;
  sort(vec.begin(), vec.end());
  cout << K - vec.at(N-1) << endl;
}
