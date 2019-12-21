#include <iostream>
#include <vector>
#include <bitset>
#include <math.h>
#define MAX_N 1000;

using namespace std;

int H, W;
vector<vector<int> > A, B;

int main() {
  cin >> H >> W;
  A.resize(H);
  for (int i = 0; i < H; i++) {
    A[i].resize(W);
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }
  B.resize(H);
  for (int i = 0; i < H; i++) {
    B[i].resize(W);
    for (int j = 0; j < W; j++) {
      cin >> B[i][j];
    }
  }

  int ans_1 = MAX_N;
  int ans_2 = MAX_N;
  for (int bit_mask = 0; bit_mask < (H * W); bit_mask;) {
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (bit_mask & ()) ans_1 += A[i][j];
      }
    }
  }
  cout << ans << endl;
}
