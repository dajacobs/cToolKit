#include <iostream>
#include <stdexcept>
#include "baseCommEmploy.h"
using namespace std;

// Constructor for base plus commission employee
basePlusCommEmploy::basePlusCommEmploy(const string &first, const string &last, const string &ssn, double sales, double rate, double salary):commissionEmployee(first, last, ssn, sales, rate) {
	setBaseSal(salary);
}
// Setter for base salary
void basePlusCommEmploy::setBaseSal(double salary) {
	if(salary >= 0.0) {
		baseSalary = salary;
	} else {
		throw invalid_arguement("Salary must be >= 0.0");
	}
}
// Getter for base salary
double basePlusCommEmploy::getBaseSal() const {
	return baseSalary;
}
// Getter for earnings
double basePlusCommEmploy::earnings() const {
	return getBaseSal() + commissionEmployee::earnings();
}