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