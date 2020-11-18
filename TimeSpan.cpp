// 342B Chau - Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "TimeSpan.h"
#include <iostream>
using namespace std;

TimeSpan::TimeSpan()
{
}

TimeSpan::TimeSpan(double s)
{
	double m = 0;
	double h = 0;
	temp_hr_ = h * 3600;
	temp_min_ = m * 60;
	temp_sec_ = s;
	temp_time_ = temp_hr_ + temp_min_ + temp_sec_;
	time_ = round(temp_time_);

	hr_ = time_ / 3600;
	time_ = time_ % 3600;
	min_ = time_ / 60;
	time_ = time_ % 60;
	sec_ = time_;
}

TimeSpan::TimeSpan(double m, double s)
{
	double h = 0;
	temp_hr_ = h * 3600;
	temp_min_ = m * 60;
	temp_sec_ = s;
	temp_time_ = temp_hr_ + temp_min_ + temp_sec_;
	time_ = round(temp_time_);

	hr_ = time_ / 3600;
	time_ = time_ % 3600;
	min_ = time_ / 60;
	time_ = time_ % 60;
	sec_ = time_;
}

TimeSpan::TimeSpan(double h, double m, double s)
{
	temp_hr_ = h * 3600;
	temp_min_ = m * 60;
	temp_sec_ = s;
	temp_time_ = temp_hr_ + temp_min_ + temp_sec_;
	time_ = round(temp_time_);

	hr_ = time_ / 3600;
	time_ = time_ % 3600;
	min_ = time_ / 60;
	time_ = time_ % 60;
	sec_ = time_;
}

TimeSpan::~TimeSpan()
{
}

int TimeSpan::getHours() const
{
	return hr_;
}

int TimeSpan::getMinutes() const
{
	return min_;
}

int TimeSpan::getSeconds() const
{
	return sec_;
}

bool TimeSpan::setTime(int hours, int minutes, int seconds)
{
	temp_hr_ = hours * 3600;
	temp_min_ = minutes * 60;
	temp_sec_ = seconds;
	temp_time_ = temp_hr_ + temp_min_ + temp_sec_;
	time_ = round(temp_time_);
	hr_ = time_ / 3600;
	time_ = time_ % 3600;
	min_ = time_ / 60;
	time_ = time_ % 60;
	sec_ = time_;
	return true;
}

ostream& operator<<(ostream& out_stream, const TimeSpan& t)
{
	out_stream << "Hours: " << t.hr_ << ", Minutes: " << t.min_ << ", Seconds: " << t.sec_ << endl;
	return out_stream;
}

istream& operator>>(istream& in_stream, TimeSpan& t)
{
	in_stream >> t.hr_ >> t.min_ >> t.sec_;
	TimeSpan temp(t.hr_, t.min_, t.sec_);
	t.hr_ = temp.hr_;
	t.min_ = temp.min_;
	t.sec_ = temp.sec_;
	t.time_ = temp.time_;
	return in_stream;
}

TimeSpan TimeSpan::operator+(const TimeSpan& t) const
{
	TimeSpan result = *this;
	result.hr_ += t.hr_;
	result.min_ += t.min_;
	result.sec_+= t.sec_;
	return result;
}

TimeSpan& TimeSpan::operator+=(const TimeSpan& t)
{
	hr_ += t.hr_;
	min_ += t.min_;
	sec_ += t.sec_;
	return *this;
}

TimeSpan TimeSpan::operator-(const TimeSpan& t) const
{
	TimeSpan result = *this;
	result.hr_ -= t.hr_;
	result.min_ -= t.min_;
	result.sec_ -= t.sec_;
	return result;
}

TimeSpan& TimeSpan::operator-=(const TimeSpan& t)
{
	hr_ -= t.hr_;
	min_ -= t.min_;
	sec_ -= t.sec_;
	return *this;
}

TimeSpan TimeSpan::operator-()
{
	hr_ = -hr_;
	min_ = -min_;
	sec_ = -sec_;
	return *this;
}

bool TimeSpan::operator==(const TimeSpan& t) const
{
	if (hr_ == t.hr_ && min_ == t.min_ && sec_ == t.sec_) {
		return true;
	}
	else
	{
		return false;
	}
}

bool TimeSpan::operator!=(const TimeSpan& t) const
{
	if (hr_ == t.hr_ && min_ == t.min_ && sec_ == t.sec_) {
		return false;
	}
	else
	{
		return true;
	}
}