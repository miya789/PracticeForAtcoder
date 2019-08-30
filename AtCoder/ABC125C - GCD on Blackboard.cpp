#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;
#define MAX_N 400
#define MAX_S 100010

template<class T> inline bool chmax(T& a, T b) { if(a < b) {a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if(a > b) {a = b; return true; } return false; }
const long long INF = 1LL << 60;

int euclidean_gcd(int a, int b) {
    if(a < b) return euclidean_gcd(b, a);
    int r;
    if (b) {
        if (b == 1) {
            return b;
        } else {
            while ((r=a%b)) {
                a = b;
                b = r;
            }
            return b;
        }
    } else {
        return a;
    }
}

// Input
int N;
int A[MAX_N];

int GCD[MAX_N] = {0};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                // cout << i << j <<"check:\t" << GCD[i] << "\t" << A[j] <<endl;
                GCD[i] = euclidean_gcd(GCD[i], A[j]);
                // cout << i << j << "check:\t" << GCD[i] << "\t" << A[j] <<endl;
            }
        }
    }

    int temp = 0;
    for (int i = 0; i < N; i++) {
        chmax(temp, GCD[i]);
    }
    cout << temp << endl;
}