#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll V, T, S, D;
    cin >> V >> T >> S >> D;

    string ans;
    ans = ((V*T - D) * (V*S - D) > 0) ? "Yes" : "No";
    cout << ans << endl;
}
