#include <iostream>
#include <stdexcept>
#include "array.h"
using namespace std;

int main() {
	Array intOne(7);
	Array intTwo;

	// Print sizes and contents of arrays
	cout << "\nSize of first array is " << intOne.getSize() << "\nthe array size after initialization: \n" << intOne;
	cout << "\nSize of second array is " << intTwo.getSize() << "\nthe array size after initialization: \n" << intTwo;	

	// Input and print the contents
	cout << "\nEnter 17 integers:" << endl;
	cin >> intOne >> intTwo;
	cout << "\nContents out input:\n" << "first array:\n" << intOne << "second array:\n" << intTwo;

	// Evaluate equality
	cout << "\nEvaluating: first array != second array" << endl;
	// Conditional check for equality
	if(intOne != intTwo) {
		cout << "first and second array are not equal" << endl;
	}

	Array intThr(intOne);
	// Print size and contests of array
	cout << "\nSize of third array is " << intThr.getSize() << "\nthe array size after initialization: \n" << intThr;
	
	// Copy contents
	cout << "\nCopying contents of second array to first:" << endl;
	intOne = intTwo;
	// Print contents	
	cout << "First array:\n" << intOne << "Second array:\n" << intTwo;

	// Evaluate equality
	cout << "\nEvaluating: first and second array are equal" << endl;
	if(intOne == intTwo) {
		cout << "first and second array are equal" << endl;
	}

	// Rvalue with overloading
	cout << "\nFirst array index 5 is " << intOne[5];
	// Lvalue with overloading
	cout << "\n\nAssigning 1000 to first arrays index 5" < endl;
	intOne[5] = 1000;
	// Print contents to verify
	cout << "First arrays contents:\n" << intOne;

	// Conditional check for out of bounds index
	try {
		cout << "\nAttempt to assign 1000 to first arrays index of 5" << endl;
		intOne[15] = 1000;
	} catch(out_of_range &ex) {
		cout << "Exception: " << ex.what() << endl;
	}
}