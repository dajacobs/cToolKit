#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int> &);

// Main function
int main() {

	// Different size vectors
	vector<int> integers1(7);
	vector<int> integers2(10);

	// Print size of first vector
	cout << "Size of vector one is: " << integers1.size() << "\nvector after intialization:" << endl;
	outputVector(integers1);
	// Print size of second vector
	cout << "\nSize of vector two is " << integers2.size() << "\nvector after intialization:" << endl;
	outputVector(integers2);

	// Print first and second integers
	cout << "\nEnter 17 integers:" << endl;
	
	// Input vectors
	inputVector(integers1);
	inputVector(integers2);

	// Print vectors after input
	cout << "\nAfter input, the vectors contain:\n" << "first integer:" << endl;
	outputVector(integers1);
	cout << "second vector:" << endl;
	outputVector(integers2);

	// Condition to check for equality
	cout << "\nEvaluating: first integer != second integer" << endl;
	if(integers1 != integers2)
		cout << "The first and second integers are not equal" << endl;

	// Create third vector using first vector
	vector<int> integers3(integers1);

	// Print size and contents of new vector
	cout << "\nSize of third vector is " << integers3.size() << "\nvector after intialization:" << endl;
	outputVector(integers3);
	// Print new assigning of first and second integers
	cout << "\nAssigning second integer to the first integer:" << endl;
	integers1 = integers2;

	// Print contents of first and second integers
	cout << "First integer:" << endl;
	outputVector(integers1);
	cout << "Second integer:" << endl;
	outputVector(integers2);
	// Condition to check equality
	cout << "\nEvaluating: first integer == second integer" << endl;

	if(integers1 == integers2)
		cout << "First and second integers are equal" << endl;

	// Create rvalue with first integer
	cout << "\nFirst interger[5] is " << integers1[5];
	// Create lvalue with first integer
	cout << "\n\nAssigning 1000 to first interger[5]" << endl;
	integers1[5] = 1000;
	cout << "First integer:" << endl;
	outputVector(integers1);

	// Test out of range index
	try {
		cout << "\nAttempt to display integers1.at(15)" << endl; 
		cout << integers1.at(15) << endl;		
	} catch(out_of_range &ex) {
		cout << "Exception occured:" << ex.what() << endl;	
	}
}