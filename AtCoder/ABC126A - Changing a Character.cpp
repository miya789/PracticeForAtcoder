#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400

// Input
int N, K;
char S[MAX_N];

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    S[K-1] += 32;
    cout << S;
}