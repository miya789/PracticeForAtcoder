#include<iostream>
#include<stdio.h>
using namespace std;
#define N_MAX 200
int main() {
	int n, buff, ans;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		a[i] = 0;

		cin >> buff;

		while (buff % 2 == 0) {
			a[i]++;
			buff = buff /2;
		}
	}
	ans = a[0];
	for (int j = 0; j < n; j++) {
		if (ans > a[j]) {
			ans = a[j];
		}
	}
	cout << ans;
	// int n, a[N_MAX];
	// int i=0;
	// int output=0;

	// for (i=0;i<N_MAX;i++) {
	// 	a[i] = 0;
	// }

	// cin >> n;
	// for (i=0;i<n;i++) {
	// 	cin >> a[i];
	// }

	// for (int flag=0;flag==0;output++) {
	// 	for (i=0;i<n;i++) {
	// 		if (a[i]%2==0) {
	// 			a[i]/=2;
	// 		} else {
	// 			flag = 1;
	// 		}
	// 	}
	// }

	// cout << output-1 << endl;
	// return 0;
}