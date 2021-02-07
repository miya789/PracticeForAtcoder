#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S[i][j];
    }
  }

  int ct = 0;
  for (int i = 0; i < H-1; i++) {
    for (int j = 0; j < W-1; j++) {
      // cout << S[i][j] << endl;
      // cout << (S[i][j] == '#') + (S[i][j+1] == '#') + (S[i+1][j] == '#') + (S[i+1][j+1] == '#') << endl;
      if ((
        (S[i][j] == '#')
        + (S[i][j+1] == '#')
        + (S[i+1][j] == '#')
        + (S[i+1][j+1] == '#')) % 2 == 1
      ) {
        ct++;
      }
    }
  }

  cout << ct << endl;

  return 0;
}
