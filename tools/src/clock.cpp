#include <iostream>
#include <stdexcept>
#include "time"
using namespace std;

// Main function
int main() {
	Time t_1;
	Time t_2(2);
	Time t_3(21, 34);
	Time t_4(12, 25, 42);

	cout << "Constructed with:\n\nt_1: all arguments defaulted\n ";
	t_1.printUniversal();
	cout << "\n ";
	t_1.printStandard();

	cout << "\n\nt_2: hour specified; minute and second defaulted\n ";
	t_2.printUniversal();
	cout << "\n ";
	t_2.printStandard();

	cout << "\n\nt_3: hour and minute specified; second defaulted\n ";
	t_3.printUniversal();
	cout << "\n ";
	t_3.printStandard();

	cout << "\n\nt_4: hour, minute, and second specified\n ";
	t_4.printUniversal();
	cout << "\n ";
	t_4.printStandard();

	// Try block for error catching
	try {
		Time t_5(27, 74, 99);
	} catch (invalid id_arguement &e) {
		cerr << "\n\nException while initializing t_5: " << e.what() << endl;
	}
}