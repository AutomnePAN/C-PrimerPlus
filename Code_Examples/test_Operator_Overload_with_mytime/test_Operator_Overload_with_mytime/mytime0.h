#pragma once
#ifndef MYTIME0_H_
#define MYTIME0_H_
#include "pch.h"
class Time
{
public:
	Time();
	~Time();
	Time(int h = 0, int m = 0);
	void AddMin(int m);
	void AddHour(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+ (const Time& t)const;
	void Show() const;
private:
	int hour;
	int minute;
};


#endif