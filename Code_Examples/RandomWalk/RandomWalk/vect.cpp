#include "pch.h"
#include <iostream>
#include "vector.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rag2deg = 45.0 / atan(1.0);

	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		ang = atan(y / x);
	}

	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode m)
	{
		mode = m;
		if (m == RECT)
		{
			x = n1;
			y = n2;
			set_ang();
			set_mag();
		}
		else if (m == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << " Error , Set the vector to 0 " << std::endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode m)
	{
		mode = m;
		if (m == RECT)
		{
			x = n1;
			y = n2;
			set_ang();
			set_mag();
		}
		else if (m == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << " Error , Set the vector to 0 " << std::endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
		//cout << "One vector destroyed! " << std::endl;
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+ (const Vector & b) const
	{
		return Vector(b.x + x, b.y + y, RECT);
	}

	Vector Vector::operator- (const Vector & b) const
	{
		return Vector(b.x - x, b.y - y, RECT);
	}

	Vector Vector::operator- () const
	{
		return Vector(-x, -y, RECT);
	}

	Vector Vector::operator* (double n) const
	{
		return Vector(n * x, n * y, RECT);
	}

	Vector operator * (double n, const Vector & a)
	{
		return n * a;
	}

	std::ostream & operator << (std::ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
		{
			os << "(x,y) = (" << v.x << " , " << v.y << ")" << std::endl;
		}
		else if(v.mode == Vector::POL)
		{
			os << "(r,a) = (" << v.mag << " , " << v.ang* Rag2deg << ")" << std::endl;
		}
		else
		{
			os << "error!!!" << std::endl;
		}

		return os;

	}
}