#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int next_combination(int sub) {
  int x = sub & -sub, y = sub + x;
  return (((sub & ~y) / x) >> 1) | y;
}

int main () {
  int n = 5; // {0,1,2,3,4}
  int k = 3;

  // 初期の決め方が杜撰では?
  for (int bit = (1<<k) - 1; bit < (1 << n); bit = next_combination(bit)) {
    vector<int> S;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        S.push_back(i);
      }
    }

    cout << bit << ": {";
    for (int i = 0; i < S.size(); i++) {
      cout << S[i] << " ";
    }
    cout << "}" << endl;
  }
}
