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