#include <iostream>
#include <stdexcept>
#include "array.h"
using namespace std;

int main() {
	Array intOne(7);
	Array intTwo;

	// Print sizes and contents of arrays
	cout << "Size of first array is " << intOne.getSize() << "\nthe array size after initialization: \n" << intOne;
	cout << "Size of second array is " << intTwo.getSize() << "\nthe array size after initialization: \n" << intTwo;	

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
}