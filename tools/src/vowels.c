#include <stdio.h>

// Main function: vowel scanner
int main(void) {
	char z[9];

	printf("%s", "Enter string: ");
	scanf("%8[aeiou]", z);

	printf("The intput was \"%s\"\n", z);
}