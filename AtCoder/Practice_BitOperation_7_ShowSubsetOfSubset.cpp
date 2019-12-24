#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main () {
  int n = 10;
  int A = (1<<2) | (1<<3) | (1<<5) | (1<<7);

  for (int bit = A; ; bit = (bit - 1) & A) {

    vector<int> S;
    for (int i = 0; i < n; i++) {
      if (bit & (1<<i)) {
        S.push_back(i);
      }
    }

    cout << bitset<10>(bit) << ": {";
    for (int i = 0; i < S.size(); i++) {
      cout << S[i] << " ";
    }
    cout << "}" << endl;

    // cout << bitset<10>(-1) << endl;
    // cout << bitset<10>((-1)&A) << endl;
    // cout << bitset<10>((-2)&A) << endl;

    if (!bit) break;
  }
}
