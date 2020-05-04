#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

// Input
int X;

int main() {
  cin >> X;

  int ct_500 = X / 500;
  int sum = X - ct_500 * 500;
  int ct_5 = sum / 5;

  cout << ct_500 * 1000 + ct_5 * 5 << endl;
}
