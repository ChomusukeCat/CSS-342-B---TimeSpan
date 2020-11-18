#pragma once
#include <iostream>
#include <string>
using namespace std;
class TimeSpan
{
public:
	//Constructors, deconstructor
	TimeSpan();
	TimeSpan(double s);
	TimeSpan(double m, double s);
	TimeSpan(double h, double m, double s);
	~TimeSpan();

	//getters, setter
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	bool setTime(int hours, int minutes, int seconds);

	//Op Overloads
	friend ostream& operator<<(ostream& out_stream, const TimeSpan& t);
	friend istream& operator>>(istream& in_stream, TimeSpan& t);

	TimeSpan operator-(const TimeSpan& t) const;
	TimeSpan& operator-=(const TimeSpan& t);

	TimeSpan operator+(const TimeSpan& t) const;
	TimeSpan& operator+=(const TimeSpan& t);

	TimeSpan operator-();

	bool operator==(const TimeSpan& t) const;
	bool operator!=(const TimeSpan& t) const;
private:
	double temp_hr_ = 0;
	double temp_min_ = 0;
	double temp_sec_ = 0;
	double temp_time_ = 0;
	int time_ = 0;
	int hr_ = 0;
	int min_ = 0;
	int sec_ = 0;
};