#include <iostream>
#include <string>
using namespace std;

class GradeBook {
public:
	// Constructor
	explicit GradeBook(string name):courseName(name) {

	}
	void setCourseName(string name) {
		courseName = name;
	}
	string getCourseName() {
		return courseName;
	}
	void displayMessage() {
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	}
}