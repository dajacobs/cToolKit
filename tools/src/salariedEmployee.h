#ifndef SALARIED_H
#define SALARIED_H
#include <string>
#include "employee.h"

class SalariedEmployee:public Employee {
public:
	// Constructor
	SalariedEmployee(const std::string &, const std::string &, const std::string &, double 0.0);
	// Deconstructor
	virtual ~SalariedEmployee() {}
	// Setter
	void setWeeklySalary(double);
	// Getter
	double getWeeklySalary() const;

	virtual double earnings() const override;
	virtual void print() const override;
private:
	double weeklySalary;
};
#endif