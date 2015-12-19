#include <iostream>
using namespace std;

// Cube function
inline double cube(const double side) 
{
	return side * side * side;
}
// Main function
int main()
{
	double sideValue;
	for(int i = 1; i <= 3; i++)
	{
		cout << "\nEnter the side length of your cube: ";
		cin >> sideValue;

		cout << "Volume of the cube with side " << sideValue << " is " << cube(sideValue) << endl; 
	}
}