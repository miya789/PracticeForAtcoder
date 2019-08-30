#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400
#define MAX_S 100010

// input
int N, D;

int main() {
    cin >> N >> D;

    int m = N - 2 * D;
    int ans = 0;
    ans = m / D;
    if (m % D == 1 || m == 2) {
      ans++;
    }
    cout << ans << endl;
}
