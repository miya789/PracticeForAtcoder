#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

const int INF = 100000000;

int N;
vector<string> T;

#define rep(i,n) for(int i=0;i<n;i++)
long long c=0, d=0, e=0,f=0,g=0,n,i,k;
string s;

int main() {
  cin >> n >> k;
  cin >> c >> d >> e;
  cin >> s;
  rep(i, n) {
    if (s[i] == 'r') f = e;
    if (s[i] == 's') f = c;
    if (s[i] == 'p') f = d;
    if (i >= k && s[i-k] == s[i]) {
      f = 0;
      s[i] = '0';
    }
    g += f;
  }
  cout << g << endl;
  return 0;
}
