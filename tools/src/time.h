#ifndef TIME H
#define TIME H

// Time class
class Time {
	public:
		explicit Time(int = 0, int = 0, int = 0);

		// Time setting functions
		void setTime(int, int, int);
		void setHour(int);
		void setMinute(int);
		void setSecond(int);

		// Get functions
		unsigned int getHour() const;
		unsigned int getMinute() const;
		unsigned int getSecond() const;

		// Output formats
		void printUniversal() const;
		void printStandard() const;

	private:
		// Time variables
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
};
#endif