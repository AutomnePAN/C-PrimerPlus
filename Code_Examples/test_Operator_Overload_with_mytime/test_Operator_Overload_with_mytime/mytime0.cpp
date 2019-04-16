#include "pch.h"
#include <iostream>
#include "mytime0.h"

Time::Time(){
	hour = 0;
	minute = 0;
}

Time::Time(int h, int m) {
	hour = h;
	minute = m;
}

Time::~Time()
{
}

void Time::AddHour(int h)
{
	hour = (hour + h) % 24;
}

void Time::AddMin(int m)
{
	minute = (minute + m) % 60;
	hour = hour + (minute + m) / 60;
}

void Time::Reset(int h, int m)
{
	hour = h;
	minute = m;
}

Time Time::operator+(const Time & t)const
{
	Time sum = {0,0};
	sum.minute = t.minute + minute;
	sum.hour = (t.hour + hour + sum.minute / 60) % 24;
	sum.minute = sum.minute % 60;
	return sum;

}

void Time::Show()const
{
	std::cout << "Hour: " << hour << "\tMinute: " << minute << std::endl;
}