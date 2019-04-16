#pragma once
#include "pch.h"
#include <iostream>

#ifndef VECTOR_H_
#define VECTOR_H_

namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode {POL, RECT};
		

	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	
	public:
		Vector(double n1, double n2, Mode m);
		void reset(double n1, double n2, Mode m);
		Vector();
		~Vector();
		double xval() const { return x; }
		double yval() const { return y; }
		double maglval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();

		Vector operator+ (const Vector & b) const;
		Vector operator- (const Vector & b) const;
		Vector operator- () const;
		Vector operator* (double n) const;

		friend Vector operator* (double n, const Vector & a);
		friend std::ostream & operator << (std::ostream & os, const Vector & v);
	};

	
}

#endif