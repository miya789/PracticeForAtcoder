#include <stdio.h>

int main(void) {
	char text[50];
	printf("Input me!:\t\t");
	scanf("%s", text);

	printf("Text: \t\t\t %c\n", *text);
	printf("Text: \t\t\t %c\n", *(text+1));

	return 0;
}