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
}