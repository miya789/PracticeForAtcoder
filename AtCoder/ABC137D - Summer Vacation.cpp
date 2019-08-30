#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 1000000000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }

// input
int N, M;
int A[MAX_N];
int B[MAX_N];

int main() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 26; j++) {
      A[i][j] = 0;
    }
  }
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 10; j++) {
      A[i][s[i][j] - 'a']++;
    }
    
  }
  
}
