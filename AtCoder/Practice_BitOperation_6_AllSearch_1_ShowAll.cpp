#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main () {
  int n = 5;

  for (int bit = 0; bit < (1 << n); bit++) {
    vector<int> S;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        S.push_back(i);
      }
    }

    cout << bitset<4>(bit) << ": {";
    for (int i = 0; i < S.size(); i++) {
      cout << S[i] << " ";
    }
    cout << "}" << endl;
  }
}
