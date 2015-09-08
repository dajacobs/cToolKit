#include <stdio.h>

int square(int y);

// Main function
int main(void) {
	for(int x = 1; x <= 10; ++x) {
		printf("%d ", square(x));
	}
	puts("");
}
// Square function
int square(int y) {
	return y * y;
}