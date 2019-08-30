#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

// Input
int r, D, x_2000;

int main() {
    cin >> r >> D >> x_2000;

    for (int i = 0; i < 10; i++) {
        x_2000 = r * x_2000 - D;
        cout << x_2000 << endl;
    }
}