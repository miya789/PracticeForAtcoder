#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 100

// Input
string S;

int main() {
  // for (int i = 0; i < MAX_N; i++) {
  //   S[i] = "";
  // }
  cin >> S;

  int half;
  int ct = 0;
  int n = (int)(S.length());
  for (int i = 0; i < n/2; i++) {
    // cout << S[i] << S[n-1-i] << endl;
    if (S[i] != S[n-1-i]) {
      ct++;
    }
  }
  cout << ct << endl;
}
