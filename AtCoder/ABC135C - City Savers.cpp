#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 1000000000

// input
int N;
int A[MAX_N];
int B[MAX_N];
int B_c[MAX_N];

int main() {
  cin >> N;
  for (int i = 0; i < N+1; i++) cin >> A[i];
  for (int i = 0; i < N; i++) cin >> B[i];
  for (int i = 0; i < N; i++) B_c[i] = 0;

  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (i > 0) {
      if (B_c[i-1] >= A[i]) {
        B_c[i-1] = B_c[i-1] - A[i];
        sum += A[i];
      } else {
        sum += B_c[i-1];
        B_c[i-1] = 0;
      }
    }
    if (B_c[i] >= A[i]) {
      B_c[i] = B_c[i] - A[i];
      sum += A[i];
    } else {
      sum += B_c[i];
      B_c[i] = 0;
    }
  }

  cout << sum << endl;
}
