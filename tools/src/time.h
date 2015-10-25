#ifndef TIME H
#define TIME H

// Time class
class Time {
	explicit Time(int = 0, int = 0, int = 0);

	// Time setting functions
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
}