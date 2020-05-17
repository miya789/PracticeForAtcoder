#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>
using namespace std;
#define MAX_N 100

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int A,B,H,M;

int main() {
  cin >> A >> B >> H >> M;
  double theta_M = 360 * M / 60;
  double theta_H = 360 * (double)(H+(M/60.0)) / 12;

  double theta = abs(theta_H - theta_M);
  theta = theta / 360 * 2*M_PI;
  
  double C = A*A + B*B - 2*A*B*cos(theta);
  cout << fixed << setprecision(20) << sqrt(C) << endl;
}
