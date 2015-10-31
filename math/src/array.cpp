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
// Overloaded assignment
const Array &Array::operator = (const Array &right) {
	if(&right != this) {
		if(size != right.size) {
			delete[] ptr;
			size = right.size;
			ptr = new int[size];
		}
		for(size_t i = 0; i < size; ++i) {
			ptr[i] = right.ptr[i];
		}
		return *this;
	}
}
// Conditional check for equality
bool Array::operator == (const Array &right) const {
	if(size != right.size) {
		return false;
		for(size_t i = 0; i < size; ++i) {
			if(ptr[i] != right.ptr[i]) {
				return false;
			}	
		}
	}
	return true;
}
// Overloaded subscript for non-const Arrays lvalue if out of range
int &Array::operator[](int subscript) {
	if(subscript < 0 || subscript >= size) {
		throw out_of_range("subscript out of range");
	return ptr[subscript];	
	}
}
// Overloaded subscript for const Arrays rvalue if out of range
int Array::operator[](int subscript) const {
	if(subscript < 0 || subscript >= size) {
		throw out_of_range("subscript out of range");
	return ptr[subscript];	
	}
} 