#pragma once
#include "pch.h"
#ifndef BRASS_H
#define BRASS_H
#include <string>
#include <iostream>

class Brass
{
private:
	std::string fullName;
	long acctNum;
	double balance;
public:
	Brass(const std::string & s = "Nullbody", long an = -1,
		double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~Brass() {}
};

class BrassPlus: public Brass
{
private:
	double maxLoan;
	double rate;
	double owesBank;

public:
	BrassPlus(const std::string & s = "Nobody", long an = -1,
		double bal = 0.0, double ml = 200, double r = 0.1325);
	BrassPlus(const Brass & ba, double ml = 200,
		double r = 0.1325);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; }
	void ResetRate(double r) { rate = r; };
	void ResetOwes() { owesBank = 0; }
};


#endif // !BRASS_H
