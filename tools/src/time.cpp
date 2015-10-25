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