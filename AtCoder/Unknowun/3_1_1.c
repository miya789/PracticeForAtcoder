#include<stdio.h>

#define MAX_N 100

int n = 5, k = 3;
int a[MAX_N] = {2,3,3,5,6};

void solve() {
	int lb = -1, ub = n;

	while (ub - lb > 1) {
		int mid = (lb + ub) / 2;
		if (a[mid] >= k) {
			ub = mid;
		} else {
			lb = mid;
		}
	}

	printf("%d\n", ub);
}

int main(void) {
	// scanf("%d %d",&n,&k);
	// scanf("%s",a);

	solve();
}
