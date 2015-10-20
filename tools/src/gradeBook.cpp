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
private:
	string courseName;
};
// Main function
int main() {
	GradeBook gradeBook1("C++ Programming Class");
	GradeBook gradeBook2("C++ Programming Lab");

	cout << "Course One: " << gradeBook1.getCourseName() << "\nCourse Two: " << gradeBook2.getCourseName() << endl;
}