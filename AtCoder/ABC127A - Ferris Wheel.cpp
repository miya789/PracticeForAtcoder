#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

// Input
int A, B;

int main() {
    cin >> A >> B;

    int ans = 0;
    if (A >= 13) {
        ans = B;
    } else if (A >= 6) {
        ans = B / 2;
    } else {
        ans = 0;
    }
    cout << ans;
}