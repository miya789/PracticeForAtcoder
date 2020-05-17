#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>
using namespace std;
#define MAX_N 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N;
int A[MAX_N],B[MAX_N];

// WIP
int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

  int ans = 0;
  for (int i = 1; i < (1<<N); i++) {
    int flag = 0;
    for (int j = 0; j < N; j++) {
      if (i>>j & 1) {
        for (int k = j+1; k < N; k++) {
          if ((i>>k & 1) && (j != k)) {
            if (A[j]*A[k] + B[j]*B[k] == 0) {
              flag = 1;
              continue;
            }
            // cout << j << ", " << k << endl;
          }
          if(flag) continue;
        }
      }
        if(flag) continue;
    }
    if (flag == 1) continue;
    ans = (ans + 1) % 1000000007;
  }

  cout << ans % 1000000007 << endl;
}
