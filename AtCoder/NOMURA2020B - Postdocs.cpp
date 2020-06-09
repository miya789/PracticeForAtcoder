#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>
#include <queue>
using namespace std;
#define MAX_M 200000
#define MAX_N 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
string T;

int main() {
  cin >> T;
  const char *hatena = "?";
  
  vector<int> hatena_index;
  for (int i = 0; i < T.size(); i++) {
    cout << T[i] << endl;
    if(T[i] == *hatena) {
      hatena_index.push_back(T[i]);
    }
  }
  
  cout << T << endl;
  return 0;
}
