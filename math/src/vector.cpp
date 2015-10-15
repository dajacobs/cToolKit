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

	cout << "Size of vector one is: " << integers1.size() << "\nvector after intialization:" << endl;
	outputVector(integers1);
}
