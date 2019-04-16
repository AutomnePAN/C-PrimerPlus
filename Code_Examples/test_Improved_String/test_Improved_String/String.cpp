#include "pch.h"
#include "String.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int String::num_strings = 0;

//class method
//constructor of String

String::String(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str,len+1, s);
	num_strings++;
}

String::String(const String & st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	num_strings++;
}

String::String()
{
	len = 0;
	str = 0;
	num_strings++;
}

String::~String()
{
	delete[]str;
	--num_strings;
}

std::ostream  & operator << (std::ostream & os, const String & st)
{
	os << st.str;
	return os;
}

std::istream  & operator >> (std::istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

String & String::operator=(const String & st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

String & String::operator=(const char * st)
{
	delete[] str;
	len = std::strlen(st);
	str = new char[len + 1];
	strcpy_s(str, len + 1, st);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

bool operator == (const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

bool operator > (const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) > 0);
}

bool operator < (const String & st1, const String & st2)
{
	return st2 > st1;
}