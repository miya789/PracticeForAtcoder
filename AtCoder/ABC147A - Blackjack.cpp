#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

// Input
int A[MAX_N];

int main() {
  cin >> A[0] >> A[1] >> A[2];

  int ans = 0;
  if ((A[0] + A[1] + A[2]) >= 22) {
    cout << "bust" << endl;
  } else {
    cout << "win" << endl;
  }
}
