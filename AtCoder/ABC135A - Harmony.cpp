#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400
#define MAX_S 100010

// input
int A, B;

int main() {
  cin >> A >> B;
  if ((A + B) % 2 == 0) {
    int K = (A + B) / 2;
    cout << K << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}
