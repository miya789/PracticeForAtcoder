#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iomanip>
#include <stack>
using namespace std;
#define MAX_M 200000

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

// Input
int N,M;
int A[MAX_M],B[MAX_M];

int main() {
  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
    A[i]--;
    B[i]--;
  }

  vector<int> path;
  stack<Pint> path_can;
  int i = 1;
   while (path_can.size()) {
     path_can.push
    int next = -1;
    for (int j = 1; j < M; j++) {
      if (A[j] == i || B[j] == i) next = 1;
    }
    if (next != -1) {
      path.push_back(next);
      i = next;
    } else {
      return 0;
    }
  }
  

  if () {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
    for (int i = 0; i < N; i++) {
      cout << sqrt(C) << endl;
    }
  }
}
