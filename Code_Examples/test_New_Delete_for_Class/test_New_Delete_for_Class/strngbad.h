#pragma once
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include "pch.h"
#include <iostream>

class Stringbad
{

private:
	char * str;
	int len;
	static int num_strings;

public:
	Stringbad(const char * s);
	Stringbad(const Stringbad & st);
	Stringbad();
	~Stringbad();
	Stringbad & operator=(const Stringbad & st);
	friend std::ostream & operator << (std::ostream & os, const Stringbad & st);
};

#endif // !STRNGBAD_H_

