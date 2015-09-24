#include <stdio.h>

// Main function
int main(void) {
	FILE *cfPtr;

	// Error message
	if((cfPtr = fopen("clients.txt", "w")) == NULL) {
		puts("File could not be opened.");
	} else {
		puts("Enter the account, name, and balance.");
		puts("Enter EOF to the end input.");
		printf("%s", "? ");

		unsigned int account;
		char name[30];
		double balance;
		scanf("%d%29s%lf", &account, name, &balance);

		while(!feof(stdin)) {
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("%s", "? ");
			scanf("%d%29s%lf", &account, name, &balance);
		}
		fclose(cfPtr);
	}
}