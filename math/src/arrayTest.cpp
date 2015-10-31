#include <iostream>
#include <stdexcept>
#include "array.h"
using namespace std;

int main() {
	Array intOne(7);
	Array intTwo;

	// Print sizes of arrays
	cout << "Size of first array is " << intOne.getSize() << "\nthe array size after initialization: \n" << intOne;
	cout << "Size of second array is " << intTwo.getSize() << "\nthe array size after initialization: \n" << intTwo;	
}