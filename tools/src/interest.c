#include <stdio.h>
#include <math.h>

// Main function: calculating compound interest
int main(void) {
	// Starting principal
	double principal = 1000.0;
	// Annual interest rate
	double rate = 0.05;

	printf("%4s%21s\n", "Year", "Amount on deposit");
	for(unsigned int year = 1; year <= 10; ++year) {
		double amount = principal * pow(1.0 + rate, year);
		printf("%4u%21.2f\n", year, amount);
	}
}