#include <stdio.h>
#include <stdlib.h>

void print(void);

int main(void) {
	atexit(print);
	puts("Enter 1 to terminate the program with function exit." "\nEnter 2 to terminate the program normally.");
	int answer;
	scanf("%d", &answer);
	if(answer == 1) {
		puts("\nTerminating program with function exit.");
		exit(EXIT_SUCCESS);
	}
	puts("\nTerminating the program by reaching the end of the main.");
}
void print(void) {
	puts("Executing the function print at program " "termination\nProgram terminated");
}