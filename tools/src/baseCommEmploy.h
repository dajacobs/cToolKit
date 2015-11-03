#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include "commissionEmployee.h"

class BaseCommEmploy : public commissionEmployee {
public:
	// Constructor for base commission employee
	BaseCommEmploy(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0, double = 0.0);
	// Setter for base salary
	void setBaseSal(double);
	// Getter for base salary
	double getBaseSal() const;
	// Earnings
	double earnings() const;
	// Print object
	void print() const;
private:
	double getSalary;
};
#endif