#pragma once
#include "pch.h"
#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student
{
private:
	typedef std::valarray<double> ArrayDb;
	std::string name;
	ArrayDb notes;
	std::ostream & arr_out(std::ostream & os) const;

public:
	Student() : name("nullstudent"), notes() {}
	explicit Student(std::string  s) : name(s), notes() {}
	explicit Student(int n) :name("nullstudent"), notes(n) {}
	Student(const std::string s, int n) : name(s), notes(n) {}
	Student(const std::string s, ArrayDb arr) :name(s), notes(arr) {}
	Student(const char * str, const double * pd, int n) : name(str), notes(pd, n) {}
	~Student() {}
	double Average() const;
	const std::string & Name() const;
	double & operator[] (int n);
	double operator[] (int n) const;
	
	
	//friends
	friend std::istream & operator>>(std::istream & is,
		Student & stu); // 1 word
	friend std::istream & getline(std::istream & is,
		Student & stu); // 1 line
		// output
	friend std::ostream & operator<<(std::ostream & os,
		const Student & stu);

};

#endif // !STUDENTC_H_
