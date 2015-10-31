#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "array.h"
using namespace std;

// Array constructor
Array::Array(int arraySize):size(arraySize > 0 ? arraySize:throw invalid_arguement("Array size must be greater than 0")), ptr(new int[size]) {
	for(size_t i = 0; i < size; ++i) {
		ptr[i] = 0;
	}
}
// Copy array constructor
Array::Array(const Array &arrayToCopy):size(arrayToCopy.size), ptr(new int[size]) {
	for(size_t i = 0; i < size; ++i) {
		ptr[i] = arrayToCopy.ptr[i];
	}
}

// Array destructor
Array::~Array() {
	delete[] ptr;
}
// Get size
size_t Array::getSize() const {
	return size;
}