#ifndef COMMISSION_H
#define COMMISSION_H
#include <string> 

class CommEmploy {
public:
	// Constructor for commission employee
	CommEmploy(const std::string &, const std::string &, const std:: string &, double = 0.0, double = 0.0);
	// Setter for first name
	void setFirstName(const std::string &);
	// Getter for first name
	std::string getfirstName() const;
	// Setter for last name
	void setLastName(const std::string &);
	// Getter for last name
	std::string getLastName() const;
	// Setter for social security number
	void setSocial(const std::string &);
	// Getter for social security number
	std::string getSocial() const;
	// Setter for gross sales
	void setGross(double);
	// Getter for gross sales
	double getGross() const;
	// Setter for commission rate
	void setCommRate(double);
	// Getter for commission rate
	double getCommRate() const;
	// Earnings
	double earnings();
	// Print object
	void print() const;
private:
	std::string firstName;
	std::string lastName;
	std::string socialNumb;
	double grossSales;
	double commRate;
}