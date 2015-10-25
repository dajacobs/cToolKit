#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time"
using namespace std;

// Time constructor initialize
Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}

// Setting time with universal format
void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}
// Set hour value function
void Time::setHour(int h) {
	if(h >= 0 && h < 24) {
		hour = h;
	} else {
		throw invalid_argument("The hour must be 0-23 format.");
	}
}
// Set minute value function
void Time::setMinute(int m) {
	if(m >= 0 && m < 60) {
		minute = m;
	} else {
		throw invalid_argument("The minute must be 0-59 format.");
	}
}
// Set second value function
void Time::setSecond(int s) {
	if(s >= 0 && s < 60) {
		second = s;
	} else {
		throw invalid_argument("The second must be 0-59 format.");
	}	
}
// Get hour value function
unsigned int Time::getHour() const {
	return hour;
}
// Get minute value function
unsigned Time::getMinute() const {
	return minute;
}
// Get second value function
unsigned Time::getSecond() const {
	return second;
}
// Print universal time format
void Time::printUniversal() const {
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}
// Print standard time format
void Time::printStandard() const {
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM"); 
}