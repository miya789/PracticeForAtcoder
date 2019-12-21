#include <iostream>
#include <vector>
#include <bitset>
#include <math.h>

using namespace std;

int N;
vector<unsigned long> A;

int main() {
  cin >> N;
  A.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  unsigned long ans = 0;
  unsigned long mod = pow(10, 9) + 7;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      ans += (A[i] ^ A[j]);
      // cout << bitset<8>(A[i]) << ",\t" << bitset<8>(A[j]) << ",\t" << (A[i] ^ A[j]) << endl;
      ans %= mod;
    }
  }

  cout << ans % mod << endl;
}
