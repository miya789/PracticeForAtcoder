#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 1000000000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }

// input
int A;
int B;

int main() {
  cin >> A >> B;

  int C[3];
  C[0] = A + B;
  C[1] = A - B;
  C[2] = A * B;
  chmax(C[0], C[1]);
  chmax(C[0], C[2]);

  cout << C[0] << endl;
}
