#ifndef STUDENTC_H_
#define STUDENTC_H_
#include <iostream>
#include <valarray>
#include <string>
class Studenti : private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	// private method for scores output
	std::ostream & arr_out(std::ostream & os) const;
public:
	Studenti() : std::string("Null Student"), ArrayDb() {}
	explicit Studenti(const std::string & s)
		: std::string(s), ArrayDb() {}
	explicit Studenti(int n) : std::string("Nully"), ArrayDb(n) {}
	Studenti(const std::string & s, int n)
		: std::string(s), ArrayDb(n) {}
	Studenti(const std::string & s, const ArrayDb & a)
		: std::string(s), ArrayDb(a) {}
	Studenti(const char * str, const double * pd, int n)
		: std::string(str), ArrayDb(pd, n) {}
	~Studenti() {}
	double Average() const;
	double & operator[](int i);
	double operator[](int i) const;
	const std::string & Name() const;
	// friends
	// input
	friend std::istream & operator>>(std::istream & is,
		Studenti & stu); // 1 word
	friend std::istream & getline(std::istream & is,
		Studenti & stu); // 1 line
		// output
	friend std::ostream & operator<<(std::ostream & os,
		const Studenti & stu);
};
#endif
