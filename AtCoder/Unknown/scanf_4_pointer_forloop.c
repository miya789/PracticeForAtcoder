#include <stdio.h>

#define MAX_N 50

void initilaize(char s[]) {
	s
}

int main(void) {
	char text[MAX_N];
	printf("Input me!:\t\t");
	scanf("%s", text);

	for (int i = 0; i < MAX_N; i++) {
		printf("Text: \t\t\t %c\n", *(text+i));
		if (*(text+i) == "\0") break;
	}

	return 0;
}