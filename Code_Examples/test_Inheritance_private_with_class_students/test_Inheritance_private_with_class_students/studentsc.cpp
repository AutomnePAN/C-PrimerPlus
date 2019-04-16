#include "pch.h"
#include <iostream>
#include "studentc.h"
using namespace std;

double Student::Average() const
{
	if (notes.size() > 0)
	{
		return notes.sum() / notes.size();
	}
	else
	{
		return 0;
	}
}

ostream & Student::arr_out(std::ostream & os) const
{
	int i;
	int lim = notes.size();
	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << notes[i] << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " empty array ";
	return os;
}

ostream & operator<<(ostream & os, const Student & stu)
{
	os << "Scores for " << stu.name << ":\n";
	stu.arr_out(os); // use private method for scores
	return os;
}

const string & Student::Name() const
{
	return name;
}
double & Student::operator[](int i)
{
	return notes[i]; // use valarray<double>::operator[]()
}
double Student::operator[](int i) const
{
	return notes[i];
}

istream & operator>>(istream & is, Student & stu)
{
	is >> stu.name;
	return is;
}
// use string friend getline(ostream &, const string &)
istream & getline(istream & is, Student & stu)
{
	getline(is, stu.name);
	return is;
}
