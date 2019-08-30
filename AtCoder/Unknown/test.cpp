#include<cstdio>

using namespace std;

const int MAX_M = 100;
const int MAX_N = 100;

int N;
int A, B;
int M;
int L[MAX_M], R[MAX_M];

bool flg[MAX_N];

int main(){
	scanf("%d%d", &N, &M);
	scanf("%d%d", &A, &B);
	for(int i = 0; i < M; ++i){
		scanf("%d%d", L + i, R + i);
		L[i]--;
		R[i]--;
	}
	for(int i = 0; i < M; ++i){
		for(int j = L[i]; j <= R[i]; ++j){
			flg[j] = true;
		}
	}
	int ans = 0;
	for(int i = 0; i < N; ++i){
		if(flg[i]) ans += A;
		else ans += B;
	}
	printf("%d\n", ans);
	return 0;
}
