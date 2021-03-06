#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
long long N;

int main() {
  cin >> N;
  switch (N % 10) {
  case 2:
  case 4:
  case 5:
  case 7:
  case 9:
    cout << "hon" << endl;
    break;
  case 0:
  case 1:
  case 6:
  case 8:
    cout << "pon" << endl;
    break;
  default:
    cout << "bon" << endl;
    break;
  }
  return 0;
}
