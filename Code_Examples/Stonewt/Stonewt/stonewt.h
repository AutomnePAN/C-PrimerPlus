#pragma once
#include "pch.h"

#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	void show_lbs()const;
	void show_stn()const;
	operator int();
	operator double();

private:
	enum {Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	
};


#endif // !STONEWT_H_
