#pragma once
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include "pch.h"
#include <iostream>
using std::ostream;
using std::istream;

class String
{

private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 100;

public:
	String(const char * s); //constructor
	String(const String & st); //copy constructor
	String(); //default constructor
	~String(); //destructor
	String & operator=(const String & st); //assignment with a String Object
	String & operator=(const char *); //assignment with a char *
	char & operator[](int i); //allocate operand
	int Length() { return len; }
	friend std::ostream & operator << (std::ostream & os, const String & st); //output
	friend std::istream & operator >> (std::istream & is, String & st); //output
	friend bool operator < (const String & st1, const String & st2);
	friend bool operator > (const String & st1, const String & st2);
	friend bool operator == (const String & st1, const String & st2);
	static int Howmany() { return num_strings; };
};

#endif // !STRNGBAD_H_

