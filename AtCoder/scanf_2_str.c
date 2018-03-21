#include <stdio.h>

int main(void) {
	char text[50];
	printf("Input me!:\t\t");
	scanf("%s", text);

	printf("Text: \t\t\t %s\n", text);
	printf("First char of text: \t %c\n", text[0]);

	return 0;
}