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
}
