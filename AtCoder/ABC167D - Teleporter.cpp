#include <stdio.h>
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
long long N, K;
long long A[MAX_N];
int A_hst[MAX_N];

int main() {
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    A_hst[i] = 0;
    // cout << i << "," << A[i] << endl;
  }
  
  int start = 0;
  int loc = start;
  int ct = 1;

  int next = A[loc]-1;
  while (A_hst[next] == 0) {
    A_hst[next] = ct;
    cout << loc << "->" << next << " (" << A_hst[next] << ")" << endl;
    loc = next; //move
    next = A[loc]-1;

    ct++;
  }
  cout << "Final: " << loc << "->" << next << " (" << A_hst[next] << ")" << endl;
  int T;
  T = ct - A_hst[next];
  cout << loc << "," << T << " (" << A_hst[next] << ")" << endl;

  int ans_hosei = A_hst[next] - 1;
  int amari = (K - ans_hosei) % T;
  int ans;
  if (K <= ans_hosei + T) {
    ans = K;
  } else if (A_hst[next] == next) {
    ans = ct - 1;
  } else {
    ans = amari + ans_hosei;
  }

  printf("ct: %d, amari: %d, ans_hosei: %d, ans: %d\n", ct, amari, ans_hosei, ans);
  int ans_loc;
  for (int i = 0; i < N; i++) {
    cout << i << "->" << A[i]-1 << " (" << A_hst[A[i]-1] << ")" << endl;
    // cout << i << " (" << A_hst[i] << ")" << endl;
    if (A_hst[i] == ans) {
      ans_loc = i;
    }
    
  }
  
  cout << ans_loc << "," << A[ans_loc] << "," << A_hst[ans_loc] << endl;
  cout << ans_loc + 1 << endl;
}
