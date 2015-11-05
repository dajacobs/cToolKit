#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
public:
	// Employee constructor
	Employee(const std::string &, const std::string &, const std::string &);
	// Employee destructor
	virtual ~Employee() {}
	// Setters
	void setFirstName(const std::string &);
	void setLastName(const std::string &);
	void setSocialSecurityNumber(const std::string &);
	// Getter
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getSocialSecurityNumber() const;
	// Employee functions
	virtual double earnings()const = 0;
	virtual void print() const;
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
};
#endif