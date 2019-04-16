#include "pch.h"
#include "strngbad.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int Stringbad::num_strings = 0;

//class method
//constructor of Stringbad

Stringbad::Stringbad(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str,len+1, s);
	num_strings++;
	cout << num_strings << " strings created! it is : " << str << endl;
}

Stringbad::Stringbad(const Stringbad & st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	num_strings++;
	cout << num_strings << " strings created! it is : " << str << endl;
}

Stringbad::Stringbad()
{
	len = 4;
	str = new char[4];
	strcpy_s(str,4, "C++");
	num_strings++;
	cout << num_strings << " strings created! it is : " << str << endl;
}

Stringbad::~Stringbad()
{
	cout << "\" " << str << "\" is deleted" <<endl ;
	delete[]str;
	--num_strings;
	cout << num_strings << " strings left " << endl;
}

std::ostream  & operator << (std::ostream & os, const Stringbad & st)
{
	os << st.str;
	return os;
}

Stringbad & Stringbad::operator=(const Stringbad & st)
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