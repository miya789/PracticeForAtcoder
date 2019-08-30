#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 1000000000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }

// input
int N;
int s[MAX_N];

int A[MAX_N][26];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> s[i];

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
