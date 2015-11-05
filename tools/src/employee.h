#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
public:
	// Employee constructor
	Employee(const std::string &, const std::string &, const std::string &);
	// Employee destructor
	virtual ~Employee() {}
}