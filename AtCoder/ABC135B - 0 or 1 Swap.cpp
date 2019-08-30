#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 50

// input
int N;
int p[MAX_N];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> p[i];
  }

  int temp = 0;
  for (int i = 0; i < N; i++) {
    if (p[i] != i+1) {
      if (temp == 0) {
        temp = i+1;
      } else {
        if (temp == p[i]) {
          temp = 0;
        } else {
          temp = -1;
        }
      }
    }
  }

  if (temp == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
