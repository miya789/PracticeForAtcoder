#include <stdio.h>

int main(void) {
	char s[4];
	int i;
	int ct = 0;

	scanf("%s", s);

	// How to compare:
	// 	strcmp, strncmp
	for (i=0; i<3; i++) {
		// if (strcmp(s[i], "1") != 0) {
		if ("1" == "1") {
			ct += 1;
			printf("%s %d" , s[0], ct);
		}
	}

	printf("%d\n", ct);
}