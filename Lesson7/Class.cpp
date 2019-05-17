class Time {

public:
	Time();				// constructor
	void setTime(int, int, int);	// set hour, minute, second
	void printUniveral();		// prnt universial-time format
	void printStandard();		// print standard-time format

private:
	int hour;	// 0 - 23 (24-hour clock format)
	int minute;	// 0 - 59
	int second;	// 0 - 59

};	// end class Time
