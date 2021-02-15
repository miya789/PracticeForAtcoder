#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i=0; i<n; i++)

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int sum = 0;
  REP(i,N+1) {
    int tmp = i;

    int keta1 = tmp % 10;
    tmp /= 10;
    int keta2 = tmp % 10;
    tmp /= 10;
    int keta3 = tmp % 10;
    tmp /= 10;
    int keta4 = tmp % 10;
    int keta5 = tmp / 10;
    if (keta1 + keta2 + keta3 + keta4 + keta5 >= A && keta1 + keta2 + keta3 + keta4 + keta5 <= B) sum += i;
  }
  cout << sum << endl;
  return 0;
}
