#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time"
using namespace std;

// Time constructor initialize
Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}