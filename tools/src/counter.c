#include <stdio.h>

// Main function
int main(void) {
	unsigned int counter = 1;

	while(counter <= 10) {
		printf("%u\n", counter);
		++counter;
	}
}