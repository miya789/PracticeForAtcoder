#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 100

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int K;
string S;

int main() {
  cin >> K;
  cin >> S;

  if ((int)(S.length()) > K) {
    cout << S.substr(0,K) << "..." << endl;
  } else {
    cout << S << endl;
  }
}
