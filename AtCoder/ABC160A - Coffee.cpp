#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

// Input
char S[MAX_N];

int main() {
  cin >> S;

  if ((S[2] == S[3]) && (S[4] == S[5])) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
