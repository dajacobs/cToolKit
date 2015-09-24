#include <stdio.h>

// clientData structure
struct clientData {
	unsigned int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};

// Main function
int main(void) {
	FILE *cfPtr;

	// Error message
	if((cfPtr = fopen("credits.txt", "rb")) == NULL) {
		puts("File could not be opened.");
	} else {
		printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

		while(!feof(cfPtr)) {
			struct clientData client = {0, "", "", 0.0};
			int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

			if(result != 0 && client.acctNum != 0) {
				printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
			}
		}
		fclose(cfPtr);
	}
}