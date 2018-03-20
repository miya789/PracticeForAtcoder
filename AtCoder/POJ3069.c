#include <stdio.h>

#define MAX_N 1000

int N, R;
int X[MAX_N] = {1,7,15,20,30,50};

int sort(const void* v1, const void* v2) {
    const int _v1 = *((const int*)v1);
    const int _v2 = *((const int*)v2);
 
    if ( _v1 > _v2 ) {
        return 1;
    } else if ( _v1 < _v2 ) {
        return -1;
    } else {
        return 0;
    }
}

void solve() {
	sort(X, X + N);

	int i = 0, ans = 0;
	while (i < N) {
		int s = X[i++];
		while (i < N && X[i] <= s +R) i++;

		int p = X[i - 1];
		while (i < N && X[i] <= p + R) i++;

		ans++;
	}

	printf("%d\n", ans);
}

int main() {
	scanf("%d %d", &N, &R);
	solve();
}