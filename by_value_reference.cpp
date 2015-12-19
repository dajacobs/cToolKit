#include <iostream>
using namespace std;

// Prototypes 
int squareByValue(int);
void squareByRerence(int &);

// Main function
int main()
{
	// Square by value demo
	int x = 2;
	cout << "x = " << x << " before squareByValue\n";
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
	cout << "x = " << x << " after squareByValue\n" << endl;

	// Square by reference demo
	int z = 4;
	cout << "z = " << z << << " before squareByRerence" << endl;\
	squareByRerence(z);	
	cout << "z = " << z << << " after squareByRerence" << endl;
}