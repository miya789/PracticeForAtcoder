#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 1000000000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }

// input
int K;
int X;

// output
int O[MAX_N];

int main() {
  cin >> K >> X;

  int min = X - (K - 1);
  int max = X + (K - 1);
  for (int i = 0; i <= max - min; i++) {
    O[i] = min + i;
    cout << min + i << " ";
  }
  cout << endl;
}
